/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hajj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 15:15:25 by mel-hajj          #+#    #+#             */
/*   Updated: 2024/09/12 16:23:07 by mel-hajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*x;

	i = 0;
	if (min >= max)
		return (NULL);
	x = malloc(sizeof(int) * (max - min));
	if (!x)
		return (NULL);
	while (i < (max - min))
	{
		x[i] = min + i;
		i++;
	}
	return (x);
}
