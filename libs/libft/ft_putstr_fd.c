/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putstr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: anagutie <anagutie@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/18 17:54:23 by anagutie      #+#    #+#                 */
/*   Updated: 2023/11/04 16:56:18 by anagutie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	write (fd, s, ft_strlen(s));
}

// int main(void)
// {
//     int fd;
//     fd = open("File_putstr.txt", O_CREAT | O_RDWR | O_APPEND); // | 0777 c 
//     ft_putstr_fd("Estamos bien", fd);
//     close(fd);
// }