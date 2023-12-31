/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchane <souchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 18:44:35 by souchane          #+#    #+#             */
/*   Updated: 2023/11/20 22:10:12 by souchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*si;
	unsigned char	*ou;

	if (!dst && !src)
		return (0);
	i = 0;
	si = (unsigned char *)dst;
	ou = (unsigned char *)src;
	while (i < n)
	{
		si[i] = ou[i];
		i++;
	}
	return (dst);
}
// int main ()
// {
// 	int b = 'a';
// 	int a[] = {20};
// 	ft_memcpy(a, &b, 2);
// 	printf("%d", a[0]);
// }