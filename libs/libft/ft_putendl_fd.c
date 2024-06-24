/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putendl_fd.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: anagutie <anagutie@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/18 17:54:14 by anagutie      #+#    #+#                 */
/*   Updated: 2023/11/04 16:57:40 by anagutie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
// int main(void)
// {
//     int fd;
//     fd = open("File_ftputendl.txt", O_CREAT | O_RDWR | O_APPEND);
//     if(fd == -1)
//         return(1);
//     ft_putendl_fd("This is working", fd);
//     close(fd);
// }