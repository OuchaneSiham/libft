/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchane <souchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 18:01:10 by souchane          #+#    #+#             */
/*   Updated: 2023/11/21 02:08:16 by souchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int		i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
// oid f( unsigned int i,char *c)
// {
// 	(void) i;
// 	if (*c >= 'a' && *c <= 'z')
// 		*c = *c -32;
// }
// int main()
// {
// 	char s[] = "siham";
// 	ft_striteri(s, f);
// 	printf("%s", s);
// }v