/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchane <souchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 12:17:30 by souchane          #+#    #+#             */
/*   Updated: 2023/11/10 17:11:15 by souchane         ###   ########.fr       */
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
// int main()
// {
// 	int s[] ={20, 3};
// 	int c = 800;// it set just the first byte of 800 in 20 depends on len!!!
// 	ft_memset(s, c, 3);
// 	printf("%d\n", s[0]);
// 	printf("%d\n", s[1]);
// }
// // 11 00100000

// int main()
// {
// 	int b[] = {255};
// 	int c = -1337;
// 	ft_memset(b, c, 4);//
// 	printf("%d\n", b[0]);
// }
// 11000111110001111100011111000111
// 00111001001110010011100100111001