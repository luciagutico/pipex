/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_put_unsigned.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: anagutie <anagutie@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/13 12:17:31 by anagutie      #+#    #+#                 */
/*   Updated: 2023/12/15 11:30:24 by anagutie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_unsigned(unsigned int i)
{
	int	counter;

	counter = 0;
	if (i >= 10)
		counter += ft_putnbr(i / 10);
	counter += ft_putchar(i % 10 + '0');
	return (counter);
}
