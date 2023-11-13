/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchane <souchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 18:30:05 by souchane          #+#    #+#             */
/*   Updated: 2023/11/13 23:07:21 by souchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	get_words(char *s, char c)
{
	int	x;
	int	y;
	int	z;

	x = 0;
	y = 0;
	z = 0;
	while (s[x])
	{
		y = 0;
		while (s[x] && s[x] == c)
			x++;
		while (s[x] && s[x] != c)
		{
			x++;
			y++;
		}
		if (y > 0)
			z++;
	}
	return (z);
}

int	get_lenght(char *p, char c)
{
	int	i;

	i = 0;
	while (p[i] != '\0' && p[i] != c)
		i++;
	return (i);
}

void	*ft_free(char **p, int j)
{
	j--;
	while (j >= 0)
	{
		free(p[j]);
		j--;
	}
	free(p);
	return (0);
}

char	**ft_fun(char *s, char c, char **t)
{
	int		x;
	int		y;
	int		z;

	x = 0;
	y = 0;
	while (s[x] != '\0')
	{
		z = 0;
		while (s[x] && s[x] == c)
			x++;
		if (s[x])
		{
			t[y] = malloc(sizeof(char) * (get_lenght((char *)s + x, c) + 1));
			if (!t[y])
				return (ft_free(t, y));
			while (s[x] && s[x] != c)
				t[y][z++] = s[x++];
			t[y][z] = 0;
			y++;
		}
	}
	t[y] = 0;
	return (t);
}

char	**ft_split(char const *s, char c)
{
	char	**p;

	if (!s)
		return (0);
	p = malloc(sizeof(char *) * (get_words((char *)s, c) + 1));
	if (!p)
		return (0);
	return (ft_fun((char *)s, c, p));
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
