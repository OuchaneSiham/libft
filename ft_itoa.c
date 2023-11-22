/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchane <souchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 11:44:00 by souchane          #+#    #+#             */
/*   Updated: 2023/11/22 16:07:59 by souchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_num(long nbr)
{
	int	i;

	i = 0;
	if (nbr <= 0)
	{
		i++;
		nbr *= -1;
	}
	while (nbr != 0)
	{
		nbr /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*p;
	int		len;
	long	nb;

	nb = n;
	len = ft_num(nb);
	p = malloc(sizeof(char) * len + 1);
	if (!p)
		return (0);
	p[len] = '\0';
	if (nb <= 0)
	{
		if (nb == 0)
			p[0] = '0';
		else
			p[0] = '-';
		nb *= -1;
	}
	while (nb != 0)
	{
		p[--len] = nb % 10 + '0';
		nb /= 10;
	}
	return (p);
}
// int main()
// {
// 	int n = 533;
// 	printf("%s\n", ft_itoa(n));
// }