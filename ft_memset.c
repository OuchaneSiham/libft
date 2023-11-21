/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchane <souchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 12:17:30 by souchane          #+#    #+#             */
/*   Updated: 2023/11/20 22:23:22 by souchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// b: is a pointer to the memory location that you want to set
// len : is the number of bytes to set
// c ; is the byte value that we wanna set in the memmory 
//>> and its converted to unsignet int when we store it in the memory
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t				t;
	unsigned char		*s;

	t = 0;
	s = (unsigned char *)b;
	while (t < len)
	{
		s[t] = (unsigned char)c;
		t++;
	}
	return (b);
}
