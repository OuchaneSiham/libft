/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchane <souchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 14:50:21 by souchane          #+#    #+#             */
/*   Updated: 2023/11/06 15:59:37 by souchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
// int main()
// {
// 	char s[] = "siham";
// 	ft_bzero(s, 2);
// 	printf("%s\n", s);
// }	
// int main()
// {
// 	int s[] ={20, 4545};
// 	int c = 5;
// 	ft_bzero(s, 5);
// 	printf("%d\n", s[0]);
// 	printf("%d\n", s[1]);
// }