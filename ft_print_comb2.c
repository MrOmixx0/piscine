/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hajj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 11:10:15 by mel-hajj          #+#    #+#             */
/*   Updated: 2025/01/13 12:38:16 by mel-hajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static char	g_fd1;//xD static variables cause more than 25 lines
static char	g_fd2;
static char	g_sd1;
static char	g_sd2;

void	ft_print_comb2(void)
{
	int	f;
	int	s;

	f = 0;
	while (f <= 98)
	{
		s = f + 1;
		while (s <= 99)
		{
			g_fd1 = (f / 10) + 48;
			g_fd2 = (f % 10) + 48;
			g_sd1 = (s / 10) + 48;
			g_sd2 = (s % 10) + 48;
			write(1, &g_fd1, 1);
			write(1, &g_fd2, 1);
			write(1, " ", 1);
			write(1, &g_sd1, 1);
			write(1, &g_sd2, 1);
			if (!(f == 98 && s == 99))
				write(1, ", ", 2);
			s++;
		}
		f++;
	}
}
