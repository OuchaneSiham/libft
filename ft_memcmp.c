/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchane <souchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:58:46 by souchane          #+#    #+#             */
/*   Updated: 2023/11/21 16:41:13 by souchane         ###   ########.fr       */
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
