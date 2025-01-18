/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchane <souchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 19:33:38 by souchane          #+#    #+#             */
/*   Updated: 2023/11/01 21:29:13 by souchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// lower case to upper case
#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 32;
	return (c);
}
// int main()
// {
// 	// char c;
// 	// char w;
// 	// c = 'a';
// 	// w = ft_toupper(c);
// 	printf("%d\n", ft_toupper('g'));
// }