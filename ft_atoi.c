/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchane <souchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 11:03:30 by souchane          #+#    #+#             */
/*   Updated: 2023/11/03 14:59:25 by souchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	j;
	int	bita;
	int	sg;

	j = 0;
	sg = 1;
	while (str[j] == '\n' || str[j] == '\t' || str[j] == '\f' || 
		str[j] == ' ' || str[j] == '\r' || str[j] == '\v')
		j++;
	if (str[j] == '+' || str[j] == '-')
	{
		if (str[j] == '-')
			sg *= -1;
		j++;
	}
	bita = 0;
	while (ft_isdigit(str[j]))
	{
		bita = bita * 10 + str[j] - '0';
		j++;
	}
	return (bita * sg);
}
// int main()
// {
// 	char s1[] = " 	-+++-56+-";
// 	char s2[] = "+-5633+-  ";
// 	printf("%d\n", ft_atoi(s1));
// 	printf("%d\n", ft_atoi(s2));
// }