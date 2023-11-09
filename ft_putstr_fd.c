/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchane <souchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 15:55:25 by souchane          #+#    #+#             */
/*   Updated: 2023/11/09 22:02:45 by souchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (!s || fd < 0)
		return ;
	while (s[i] != '\0')
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
}
// int main() 
// { 
// 	int fd = open("siham", O_CREAT | O_APPEND | O_RDWR, 0777); 

// 	printf("fd = %d\n", fd); 
// 	ft_putstr_fd("siham", fd);

// 	return 0; 
// }