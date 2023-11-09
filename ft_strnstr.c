/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchane <souchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 15:30:41 by souchane          #+#    #+#             */
/*   Updated: 2023/11/09 15:06:22 by souchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	x;
	size_t	flen;

	x = 0;
	if (!str && !len)
		return (0);
	if (*to_find == 0 || to_find == str)
		return ((char *)str);
	flen = ft_strlen(to_find);
	while (str[x] && flen <= len)
	{
		if (!(ft_strncmp((char *)str + x, (char *)to_find, flen)))
			return ((char *)str + x);
		len--;
		x++;
	}
	return (0);
}
// int main(){
// 	char str[] = "hello me ";
// 	char tofind[] = "llo";
// 	size_t i = 6;
// 	char *result = ft_strnstr(str, tofind, i);
// 	printf("%s\n", result);
// }