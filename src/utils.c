/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   utils.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: anagutie <anagutie@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/05 11:28:20 by anagutie      #+#    #+#                 */
/*   Updated: 2024/06/24 15:44:18 by anagutie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/pipex.h"

char	*find_path(char *cmd, char **envp)
{
	int		i;
	char	**path;
	char	*full_path;

	i = 0;
	if (access(cmd, X_OK) == 0)
		return (cmd);
	while (ft_strnstr(envp[i], "PATH", 4) == NULL)
		i++;
	path = ft_split(envp[i] + 5, ':');
	if (path == NULL)
		ft_free(path);
	i = 0;
	while (path[i])
	{
		full_path = join_path(path[i], cmd);
		if (access(full_path, X_OK) == 0)
			return (full_path);
		free (full_path);
		i++;
	}
	i = -1;
	ft_free(path);
	return (0);
}

char	*join_path(char *path, char *cmd)
{
	char	*full_path;	
	char	*dir_with_slash;

	dir_with_slash = ft_strjoin(path, "/");
	if (dir_with_slash == NULL)
		return (NULL);
	full_path = ft_strjoin(dir_with_slash, cmd);
	if (full_path == NULL)
		return (free(dir_with_slash), NULL);
	free(dir_with_slash);
	return (full_path);
}

int	check_status(int status)
{
	if (WIFEXITED(status))
		return (WEXITSTATUS(status));
	return (127);
}

void	ft_free(char **to_be_freed)
{
	int	i;

	i = 0;
	while (to_be_freed[i] != 0)
	{
		free(to_be_freed[i]);
		i++;
	}
	free(to_be_freed);
}
