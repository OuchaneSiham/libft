/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchane <souchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:45:20 by souchane          #+#    #+#             */
/*   Updated: 2023/11/06 19:31:34 by souchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*s1;
	unsigned char	*s2;

	s1 = (unsigned char *)dst;
	s2 = (unsigned char *)src;
	if (dst > src)
	{
		while (len-- > 0)
			s1[len] = s2[len];
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}

// int main() {
//     char str[] = "siham";
//     ft_memcpy(str + 2, str, 6);
//     printf("%s\n", str);
//     return 0;
// }

// int main() {
//     char str[10] = "siham";
//      printf("dst: %s\n", ft_memmove(str + 2, str, 6));
//      printf("str: %s\n", str);
//     return 0;
// }
