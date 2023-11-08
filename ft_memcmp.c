/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchane <souchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:58:46 by souchane          #+#    #+#             */
/*   Updated: 2023/11/06 15:11:50 by souchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*si;
	unsigned char	*ou;

	i = 0;
	si = (unsigned char *)s1;
	ou = (unsigned char *)s2;
	while (i < n)
	{
		if (si[i] != ou[i])
			return (si[i] - ou[i]);
		i++;
	}
	return (0);
}
// int main()
// {
// 	int c[] = {6456459, 6456459};
// 	int a[] = {6456459, 7242891};
// 	printf("%d\n", ft_memcmp(c, a, 7));// -12 (98 - 110)
// }
// 4561
// 209
// 10001 11010001
// 00000 11010001
// 01100010 10000100 10001011
// 01101110 10000100 10001011
// it compare byte par byte 