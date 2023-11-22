/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchane <souchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 17:06:37 by souchane          #+#    #+#             */
/*   Updated: 2023/11/22 16:11:20 by souchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_find(char const *set, char c)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *str, char const *set)
{
	size_t	len;
	size_t	start;
	size_t	end;
	char	*p;

	start = 0;
	if (!str || !set)
		return (0);
	while (str[start] != '\0' && ft_find(set, str[start]))
		start++;
	end = ft_strlen(str);
	while (end > start && ft_find(set, str[end - 1]))
		end--;
	len = end - start;
	p = ft_substr(str, start, len);
	return (p);
}
// "  .00..        ...   ..000*" ". 0"
// to know our  string we do the end - the start
// ft_substr(str, start, len) >> p = malloc(sizeof(char) * len + 1)
// cz substr already has malloc 
// and substr already has = '\0'
// int main()
// {
// 	char s[] = "hl.hihammmehd.hl.lh";
// 	char i[] = "lh.";
// 	printf("%s\n",ft_strtrim(s, i));
// }