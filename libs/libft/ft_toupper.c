/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_toupper.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: anagutie <anagutie@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/03 10:32:31 by anagutie      #+#    #+#                 */
/*   Updated: 2023/11/04 15:41:53 by anagutie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else
		return (c);
}

/*int main(void)
{
    char *str;
    int i;

    i = 0;
    str = "HolaCOmoEStasESPERO QUE muy bien";

    while(str[i] != '\0')
    {
        printf("%c",ft_toupper(str[i]));
        i++;
    }
    return(0);
}*/