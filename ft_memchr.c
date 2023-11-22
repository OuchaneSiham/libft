/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchane <souchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 21:02:17 by souchane          #+#    #+#             */
/*   Updated: 2023/11/21 17:15:06 by souchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*si;

	i = 0;
	si = (unsigned char *)s;
	while (i < n)
	{
		if (si[i] == (unsigned char)c)
			return ((void *)si + i);
		i++;
	}
	return (0);
}
// int main()
// {
//     char s[] = "aehg" ;
//     int c = 70;
//     size_t  n = 6;
//     char    *sn;

//     sn = ft_memchr(s, 0, n);
// 	// memchr(NULL, c, n);
//     printf("Result: %p\n", sn);
//     return (0);
// }
// int main()
// {
//     int a[] = {20392};
//     int c = 79;
// 	// char s = ft_memchr(a,c, 2);
//     printf("Result: %p\n",ft_memchr(a,c, 3));
//     return (0);
// }
// 1010001110
// 10