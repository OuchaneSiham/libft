/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchane <souchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 18:30:05 by souchane          #+#    #+#             */
/*   Updated: 2023/11/09 22:08:12 by souchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	get_words(char *s, char c)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		while (s[i] && s[i] != c)
		{
			i++;
			j++;
		}
		if (j > 0)
		{
			k++;
			j = 0;
		}
	}
	return (k);
}

int	get_lenght(char const *p, char c)
{
	int	i;

	i = 0;
	while (p[i] != '\0' && p[i] != c)
		i++;
	return (i);
}

void	*ft_free(char **p, int c)
{
	c--;
	while (c >= 0)
	{
		free(p[c]);
		c--;
	}
	free(p);
	return (0);
}

char	**ft_fun(char const *s, char c, char **p)
{
	int	j;
	int	k;
	int	i;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		k = 0;
		while (s[i] != '\0' && s[i] == c)
			i++;
		if (s[i])
		{
			p[j] = malloc(sizeof(char) * get_lenght(s + i, c) + 1);
			if (!p[j])
				return (ft_free(p, i));
			while (s[i] && s[i] != c)
				p[j][k++] = s[i++];
			p[j++][k] = '\0';
		}
	}
	p[j] = 0;
	return (p);
}

char	**ft_split(char *s, char c)
{
	char	**p;
	char	**tab;

	if (!s)
		return (0);
	p = malloc(sizeof(char *) * (get_words(s, c) + 1));
	if (!p)
		return (0);
	tab = ft_fun(s, c, p);
	return (tab);
}
// int main()
// {
// 	char s[] = "to be honest      vbgch     chggv gfgh ";
// 	char c = ' ';
// 	char **resu = ft_split((char *)s, c);

// 	int  i =0;
// 	while (resu[i])
// 	{
// 		printf("%s\n", resu[i]);
// 		i++;
// 	}
// }
