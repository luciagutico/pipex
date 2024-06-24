/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: anagutie <anagutie@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/18 17:54:19 by anagutie      #+#    #+#                 */
/*   Updated: 2023/11/04 17:52:04 by anagutie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int			current_dig;
	long int	number;

	current_dig = 0;
	number = n;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		number *= -1;
	}
	current_dig = number % 10;
	number = number / 10;
	current_dig += 48;
	if (number > 0)
		ft_putnbr_fd(number, fd);
	ft_putchar_fd(current_dig, fd);
}

// int main()
// {
// 	ft_putnbr_fd(0, 1);
// 	return(0);
// }