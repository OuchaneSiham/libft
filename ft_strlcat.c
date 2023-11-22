/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchane <souchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 13:25:24 by souchane          #+#    #+#             */
/*   Updated: 2023/11/22 20:08:50 by souchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	k;
	size_t	dlen;
	size_t	slen;

	k = 0;
	slen = ft_strlen(src);
	if (!dst && !dstsize)
		return (slen);
	dlen = ft_strlen(dst);
	if (dstsize < dlen)
		return (dstsize + slen);
	dstsize = dstsize - dlen;
	if (dstsize != 0)
	{
		while (src[k] != '\0' && k < (dstsize - 1))
		{
			dst[dlen + k] = src[k];
			k++;
		}
		dst[dlen + k] = '\0';
	}
	return (dlen + slen);
}
// int main()
// {
// 	char str[] = "siham";
// 	char dst[] = "ouchane";
// 	ft_strlcat(dst, str, 9);
// 	printf("%s\n", dst);
// }