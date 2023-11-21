/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchane <souchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 22:12:20 by souchane          #+#    #+#             */
/*   Updated: 2023/11/18 20:23:05 by souchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	slen;
	char	*si;
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	if (!len || start >= ft_strlen(s))
		return (ft_strdup(""));
	slen = ft_strlen(s + start);
	if (slen > len)
		slen = len; 
	si = malloc(sizeof(char) * slen + 1);
	if (!si)
		return (0);
	while (i < slen)
	{
		si[i] = s[start];
		i++;
		start++;
	}
	si[i] = '\0';
	return (si);
}
// else slen < len >> slen = ft_strlen( s + start)
// int main()
// {
// 	char *s;
// 	s = ft_substr("aisiham", 2, 3);
// 	printf("%p\n", s);
// 	printf("%s\n", s);
// }