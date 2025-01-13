/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hajj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 15:16:54 by mel-hajj          #+#    #+#             */
/*   Updated: 2024/09/05 14:19:04 by mel-hajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dl;
	unsigned int	sl;
	unsigned int	i;
	unsigned int	j;

	dl = 0;
	sl = 0;
	i = 0;
	j = 0;
	while (dest[dl] != '\0')
		dl++;
	while (src[sl] != '\0')
		sl++;
	if (size <= dl)
		return (size + sl);
	j = dl;
	while (src[i] != '\0' && j < size - 1)
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	dest[j] = '\0';
	return (dl + sl);
}
