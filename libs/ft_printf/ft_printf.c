/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: anagutie <anagutie@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/29 17:54:28 by anagutie      #+#    #+#                 */
/*   Updated: 2023/12/27 12:57:23 by anagutie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	print(const char format_specifier, va_list arguments)
{
	int	printed;

	printed = 0;
	if (format_specifier == '%')
		printed += ft_putchar('%');
	else if (format_specifier == 'c')
		printed += ft_putchar(va_arg(arguments, int));
	else if (format_specifier == 's')
		printed += ft_putstr(va_arg(arguments, char *));
	else if (format_specifier == 'i' || format_specifier == 'd')
		printed += ft_putnbr(va_arg(arguments, int));
	else if (format_specifier == 'u')
		printed += ft_put_unsigned(va_arg(arguments, unsigned int));
	else if (format_specifier == 'p')
		printed += ft_put_hex(va_arg(arguments, void *), "0123456789abcdef");
	else if (format_specifier == 'x')
		printed += ft_base(va_arg(arguments, unsigned int), "0123456789abcdef");
	else if (format_specifier == 'X')
		printed += ft_base(va_arg(arguments, unsigned int), "0123456789ABCDEF");
	else
		printed += ft_putchar('%');
	return (printed);
}

int	ft_printf(const char *format_specifier, ...)
{
	int		i;
	va_list	arguments;

	if (!format_specifier)
		return (-1);
	va_start(arguments, format_specifier);
	i = 0;
	while (*format_specifier)
	{
		if (*format_specifier == '%')
		{
			format_specifier++;
			if (*format_specifier)
				i += print(*format_specifier, arguments);
			else
			{
				va_end(arguments);
				return (-1);
			}
		}
		else
			i += ft_putchar(*format_specifier);
		format_specifier++;
	}
	return (i);
}

// int	main(void)
// {
// 	char	*test;
// 	int	num_1;
// 	int num_2;
// 	char *ptr = NULL;

// 	test = "I hope this works";
// 	num_1 = ft_printf("%X\n", 256);
// 	num_2 = printf("%X\n", 256);
// 	printf("My function: %i\n", num_1);
// 	printf("Original function: %i\n", num_2);
// 	return (0);
// }
