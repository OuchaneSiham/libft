/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchane <souchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 20:15:42 by souchane          #+#    #+#             */
/*   Updated: 2023/11/22 20:07:18 by souchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;
	size_t	len;

	len = size * count;
	if ((len / count) != size)
		return (0);
	p = (void *)malloc(len);
	if (!p)
		return (0);
	ft_bzero(p, len);
	return (p);
}
