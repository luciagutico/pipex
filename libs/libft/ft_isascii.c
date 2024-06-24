/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isascii.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: anagutie <anagutie@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/03 10:17:05 by anagutie      #+#    #+#                 */
/*   Updated: 2023/11/04 17:17:21 by anagutie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int i)
{
	if (i >= 0 && i <= 127)
		return (1);
	return (0);
}

/*int main(void)
{
    char *str;
    int i;

    str = "hola097*-1$$€";

    while(str[i] != '\0')
    {
        if(ft_isascii(str[i]) == 1)
        {
            printf("Este es un valor ascii: %c\n",str[i]);
        }
        else
        {
            printf("Este no es un valor ascci: %c\n",str[i]);
        }
        i++;
    }
}*/