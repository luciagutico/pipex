/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: anagutie <anagutie@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/23 14:44:17 by anagutie      #+#    #+#                 */
/*   Updated: 2023/11/04 15:50:26 by anagutie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	source_length;

	source_length = 0;
	if (s1 != 0 && set != 0)
	{
		source_length = ft_strlen(s1);
		i = 0;
		while (s1[i] && ft_strchr(set, s1[i]))
			i++;
		while (s1[source_length -1] && ft_strchr(set, s1[source_length -1]))
			source_length--;
		return (ft_substr(s1, i, source_length - i));
	}
	return (NULL);
}

// int main(void)
// {
// 	char *s1 = "Pannekoeken";
// 	char *set = "";

// 	printf("%s\n",ft_strtrim(s1, set));
// }