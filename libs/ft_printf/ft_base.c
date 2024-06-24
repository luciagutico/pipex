/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_base.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: anagutie <anagutie@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/14 10:35:18 by anagutie      #+#    #+#                 */
/*   Updated: 2023/12/17 20:08:12 by anagutie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_base(unsigned int nbr, char *base)
{
	int		base_len;
	long	long_nbr;
	int		counter;

	base_len = ft_strlen(base);
	long_nbr = nbr;
	counter = 0;
	if (long_nbr < base_len)
	{
		ft_putchar(base[long_nbr]);
		counter++;
	}
	if (long_nbr >= base_len)
	{
		counter += ft_base(long_nbr / base_len, base);
		counter += ft_base(long_nbr % base_len, base);
	}
	return (counter);
}
