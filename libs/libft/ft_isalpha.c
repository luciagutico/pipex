/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalpha.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: anagutie <anagutie@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/02 19:34:46 by anagutie      #+#    #+#                 */
/*   Updated: 2023/11/04 17:57:59 by anagutie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if (('a' <= c && 'z' >= c) || ('A' <= c && 'Z' >= c))
		return (1);
	return (0);
}

// int main(void)
// {
//     char *str;
//     int i;
//     i = 0;
//     str = "Octu 1 ___ bre*";
//     while (str[i] != '\0')
//     {
//         if(ft_isalpha(str[i]) == 1 )
//             printf("%c is an alphabetic character.\n", str[i]);
//         else
//             printf("%c is not an alphabetich character.\n", str[i]);
//         i++;
//     }
//     return(0);
// }
