/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hajj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 15:02:17 by mel-hajj          #+#    #+#             */
/*   Updated: 2024/08/29 18:34:21 by mel-hajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int	*a, int	*b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_sort_int_tab(int	*tab, int size)
{
	int	x;

	x = 0;
	while (x < size - 1)
	{
		while (tab[x] > tab[x + 1])
		{
			ft_swap(&tab[x], &tab[x + 1]);
			x = 0;
		}
		x++;
	}
}
