/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_put_hex.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: anagutie <anagutie@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/14 10:00:27 by anagutie      #+#    #+#                 */
/*   Updated: 2023/12/17 15:49:36 by anagutie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_hex(void *ptr, char *digits)
{
	char			hex_buffer[20];
	unsigned long	address;
	int				buff_length;
	int				printed;

	address = (unsigned long)ptr;
	buff_length = 0;
	if (!address)
	{
		write (1, "(nil)", 5);
		return (5);
	}
	while (address > 0)
	{
		hex_buffer[buff_length++] = digits[address % 16];
		address /= 16;
	}
	ft_putstr("0x");
	printed = buff_length + 2;
	while (buff_length > 0)
	{
		write(1, &hex_buffer[buff_length - 1], 1);
		buff_length--;
	}
	return (printed);
}
