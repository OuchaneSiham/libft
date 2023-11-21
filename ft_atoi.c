/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchane <souchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 11:03:30 by souchane          #+#    #+#             */
/*   Updated: 2023/11/20 23:16:36 by souchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int			j;
	long long	nb;
	long long	tmp;
	int			sg;

	j = 0;
	sg = 1;
	while (str[j] == '\n' || str[j] == '\t' || str[j] == '\f' || 
		str[j] == ' ' || str[j] == '\r' || str[j] == '\v')
		j++;
	if (str[j] == '+' || str[j] == '-')
		if (str[j++] == '-')
			sg *= -1;
	nb = 0;
	while (ft_isdigit(str[j]))
	{
		tmp = nb;
		nb = nb * 10 + str[j] - '0';
		if (tmp != nb / 10 && sg == 1)
			return (-1);
		else if (tmp != nb / 10 && sg == -1)
			return (0);
		j++;
	}
	return (nb * sg);
}
// int main()
// {
// 	char s1[] = "92233720368547758020";
// 	// char s2[] = "+-5633+-  ";
// 	printf("%d\n", atoi(s1));
// 	printf("%d\n", ft_atoi(s1));
// }