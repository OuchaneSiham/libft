/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchane <souchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 20:15:42 by souchane          #+#    #+#             */
/*   Updated: 2023/11/15 16:12:42 by souchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;
	size_t	len;

	len = size * count;
	p = (void *)malloc(len);
	if (!p)
		return (0);
	ft_bzero(p, len);
	return (p);
}

// int main()
// {
// 	char *d;

// 	d = ft_calloc(1,sizeof(char));
// //  c = malloc(6 * sizeof(char));
// 	printf("%p\n", d);
// 	printf("%s\n", d);
// }
// // calloc(5, sizeof(char));
// // malloc(sizeof(char) * 5)

// int main(void)

// {
// 	void *p = calloc(-1,-2);
// 	void *s = ft_calloc(-1, -2);
// 	printf("%p \n ",p);
// 	printf("%p \n ",s);
// }