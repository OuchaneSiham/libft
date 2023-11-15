/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchane <souchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 11:03:30 by souchane          #+#    #+#             */
/*   Updated: 2023/11/15 16:01:58 by souchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int			j;
	long long	bita;
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
	bita = 0;
	while (ft_isdigit(str[j]))
	{
		tmp = bita;
		bita = bita * 10 + str[j] - '0';
		if (tmp != bita / 10 && sg == 1)
			return (-1);
		else if (tmp != bita / 10 && sg == -1)
			return (0);
		j++;
	}
	return (bita * sg);
}
// int main()
// {
// 	char s1[] = "9223372036854775807";
// 	// char s2[] = "+-5633+-  ";
// 	printf("%d\n", atoi(s1));
// 	printf("%d\n", ft_atoi(s1));
// }