/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchane <souchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 16:55:08 by souchane          #+#    #+#             */
/*   Updated: 2023/11/21 16:32:17 by souchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char				*str;
	unsigned int		i;

	i = 0;
	if (!s || !f)
		return (0);
	str = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!str)
		return (0);
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
// char f( unsigned int i,char c)
// {
// 	(void) i;
// 	if (c >= 'a' && c <= 'z')
// 		c = c -32;
// 	return c;
// }
// int main()
// {
// 	char str[] = "siham";
// 	char *s2;
// 	s2 = ft_strmapi(str, f);
// 	printf("%s", s2);
// }