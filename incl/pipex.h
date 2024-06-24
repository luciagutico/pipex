/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   pipex.h                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: anagutie <anagutie@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/31 10:50:16 by anagutie      #+#    #+#                 */
/*   Updated: 2024/06/24 15:44:26 by anagutie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <fcntl.h>
# include <sys/wait.h>
# include "../libs/ft_printf/ft_printf.h"
# include "../libs/libft/libft.h"

/*PIPEX*/
int		pipex(char **av, char **envp);
void	child1(char **av, char **envp, int *fd);
void	child2(char **av, char **envp, int *fd);
void	execute(char *command, char **env);

/*UTILS*/
char	*find_path(char *cmd, char **envp);
char	*join_path(char *path, char *cmd);
void	ft_free(char **to_be_freed);
int		check_status(int status);

#endif