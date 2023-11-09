/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchane <souchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 16:55:08 by souchane          #+#    #+#             */
/*   Updated: 2023/11/09 22:00:09 by souchane         ###   ########.fr       */
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

// char	ft_toup(unsigned int i, char c)
// {
// 	(void) i;
// 	if (c >= 'a' && c <= 'z')
// 		c = c - 32;
// 	return (c);
// }
// this func we put the string and we changed 
// depends on the changes that we put in the func f 
// for example the func ft_toup we changer to upp to lower 
// so the string will changed to lowercase
// int main()
// {
// 	printf("%s\n", ft_strmapi("siham", &ft_toup));
// }