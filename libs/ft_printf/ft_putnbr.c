/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: anagutie <anagutie@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/13 12:30:33 by anagutie      #+#    #+#                 */
/*   Updated: 2023/12/15 11:28:54 by anagutie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int i)
{
	int	counter;

	counter = 0;
	if (i == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	if (i < 0)
	{
		counter += ft_putchar('-');
		i = -i;
	}
	if (i / 10 != 0)
		counter += ft_putnbr(i / 10);
	counter += ft_putchar(i % 10 + '0');
	return (counter);
}
