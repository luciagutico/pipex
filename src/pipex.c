/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   pipex.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: anagutie <anagutie@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/05 11:18:46 by anagutie      #+#    #+#                 */
/*   Updated: 2024/06/24 17:19:13 by anagutie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/pipex.h"

int	pipex(char **av, char **envp)
{
	int		status;
	int		p_fd[2];
	pid_t	first_half;
	pid_t	second_half;

	if (pipe(p_fd) == -1)
		exit(EXIT_FAILURE);
	first_half = fork();
	if (first_half == -1)
		exit(EXIT_FAILURE);
	if (first_half == 0)
		child1(av, envp, p_fd);
	second_half = fork();
	if (second_half == -1)
		exit(EXIT_FAILURE);
	if (second_half == 0)
		child2(av, envp, p_fd);
	close(p_fd[0]);
	close(p_fd[1]);
	waitpid(second_half, &status, 0);
	wait(NULL);
	return (check_status(status));
}

void	child1(char **av, char **envp, int *fd)
{
	int	input_fd;

	if (access(av[1], F_OK) == -1 || access(av[1], R_OK) == -1)
	{
		perror("Couldnt access infile");
		exit(EXIT_FAILURE);
	}
	input_fd = open(av[1], O_RDONLY);
	if (input_fd == -1)
		exit(EXIT_FAILURE);
	close(fd[0]);
	if (dup2(input_fd, STDIN_FILENO) == -1 || dup2(fd[1], \
		STDOUT_FILENO) == -1)
	{
		exit(EXIT_FAILURE);
		perror("dup2");
	}
	close(input_fd);
	close(fd[1]);
	execute(av[2], envp);
}

void	child2(char **av, char **envp, int *fd)
{
	int	output_fd;

	if (access(av[4], F_OK) == 0 && access(av[4], W_OK) == -1)
	{
		perror("Oufile exists and doesn't have write permissions");
		exit(EXIT_FAILURE);
	}
	output_fd = open(av[4], O_RDWR | O_CREAT | O_TRUNC, 0644);
	if (output_fd == -1)
		exit(EXIT_FAILURE);
	close(fd[1]);
	if (dup2(output_fd, STDOUT_FILENO) == -1 || dup2(fd[0], \
		STDIN_FILENO) == -1)
	{
		exit(EXIT_FAILURE);
		perror("dup2");
	}
	close(fd[0]);
	close(output_fd);
	execute(av[3], envp);
}

void	execute(char *command, char **env)
{
	char	**separate_command;
	char	*path;

	separate_command = ft_split(command, ' ');
	if (separate_command == NULL)
		ft_free(separate_command);
	path = find_path(separate_command[0], env);
	if (!path)
	{
		ft_free(separate_command);
		perror("Error");
		exit(127);
	}
	execve(path, separate_command, env);
	perror("Error");
	exit(EXIT_FAILURE);
}

int	main(int argc, char **av, char **envp)
{
	if (argc == 5)
		return (pipex(av, envp));
	else
	{
		ft_putstr_fd("Error: Bad arguments\n", 2);
		ft_putstr_fd("Usage:./pipex <file1> <cmd1> <cmd2> <file2>\n", 1);
		return (1);
	}
}
