/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchane <souchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 15:30:41 by souchane          #+#    #+#             */
/*   Updated: 2023/11/22 20:08:18 by souchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	x;
	size_t	flen;

	x = 0;
	if (!str && to_find && !len)
		return (0);
	if (*to_find == 0 || to_find == str)
		return ((char *)str);
	flen = ft_strlen(to_find);
	while (str[x] && flen <= len)
	{
		if ((ft_strncmp((char *)str + x, (char *)to_find, flen)) == 0)
			return ((char *)str + x);
		len--;
		x++;
	}
	return (0);
}
// int main(){
// 	char str[] = "";
// 	char tofind[] = "";
// 	size_t i = 7;
// 	char *result = ft_strnstr(str, tofind, 4);
// 	char *re = strnstr(str, tofind, 4);
// 	printf("%s\n", result);
// 	printf("%s\n", re);
// 	printf("%p\n", result);
// 	printf("%p\n", re);
// }