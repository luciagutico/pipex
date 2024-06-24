/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_tolower.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: anagutie <anagutie@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/03 10:33:36 by anagutie      #+#    #+#                 */
/*   Updated: 2023/11/04 15:46:13 by anagutie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c += 32);
	else
		return (c);
}

// int main(void)
// {
//     char *str;
//     int i;

//     i = 0;
//     str = "DEspierto y agARADEZCO, SoY FELIZ CON lo que TengOOOO, 
//      Y AMANECI pa DisfrutAR <3";

//     while(str[i] != '\0')
//     {
//         printf("%c", ft_tolower(str[i]));
//         i++;
//     }
// }
