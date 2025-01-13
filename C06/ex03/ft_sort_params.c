/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hajj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 19:55:17 by mel-hajj          #+#    #+#             */
/*   Updated: 2024/09/11 19:33:54 by mel-hajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_strcmp(char	*s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] == s2[i])
			i++;
		else
			return (s1[i] - s2[i]);
	}
	return (0);
}

void	ft_swap(char **str1, char **str2)
{
	char	*s;

	s = *str1;
	*str1 = *str2;
	*str2 = s;
}

int	main(int ac, char **av)
{
	int	i;
	int	j;

	if (ac > 1)
	{
		i = 1;
		while (i < ac - 1)
		{
			if ((ft_strcmp(av[i], av[i + 1]) > 0))
			{
				ft_swap(&av[i], &av[i + 1]);
				i = 1;
			}
			else
				i++;
		}
		j = 1;
		while (j < ac)
		{
			ft_putstr(av[j]);
			ft_putchar('\n');
			j++;
		}
	}
}
