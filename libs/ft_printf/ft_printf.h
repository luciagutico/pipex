/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: anagutie <anagutie@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/29 17:54:33 by anagutie      #+#    #+#                 */
/*   Updated: 2023/12/17 19:38:45 by anagutie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include <inttypes.h>
# include <limits.h>
# include "ft_printf.h"

int		ft_putstr(char *str);
int		ft_putchar(char c);
int		ft_putnbr(int i);
int		ft_put_unsigned(unsigned int i);
int		ft_put_hex(void *ptr, char *hex_digits);
int		ft_base(unsigned int nbr, char *base);
int		printing(const char format_specifier, va_list arguments);
int		ft_printf(const char *format_specifier, ...);
size_t	ft_strlen(const char *str);

#endif
