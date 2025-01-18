/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchane <souchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 12:17:30 by souchane          #+#    #+#             */
/*   Updated: 2023/11/21 17:14:46 by souchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			t;
	unsigned char	*s;

	t = 0;
	s = (unsigned char *)b;
	while (t < len)
	{
		s[t] = (unsigned char)c;
		t++;
	}
	return (b);
}
