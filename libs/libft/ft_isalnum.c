/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalnum.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: anagutie <anagutie@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/03 10:17:02 by anagutie      #+#    #+#                 */
/*   Updated: 2023/11/04 17:19:51 by anagutie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(char c)
{
	if ((ft_isalpha(c)) == 1 || (ft_isdigit(c)) == 1)
		return (1);
	return (0);
}

/*int main(void)
{
    char *str;
    int i;

    i = 0;

    str = "HOLA99 3IMRK]--=300";

    while(str[i] != '\0')
    {
        printf("%c is: %d\n", str[i], ft_isalnum(str[i]));
        // if(ft_isalnum(str[i]) == 1)
        //     printf("This is a letter or a numbers\n");
        // else
        //     printf("The string doesn't contain letters or numbers\n ");
        i++;
    }
    
}*/