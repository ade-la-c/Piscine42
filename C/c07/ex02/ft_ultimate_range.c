/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 14:31:40 by ade-la-c          #+#    #+#             */
/*   Updated: 2019/11/20 23:32:27 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int	*dest;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	if (!(dest = (malloc(sizeof(int) * (max - min)))))
		return (-1);
	i = 0;
	while (min < max)
	{
		dest[i] = min;
		i++;
		min++;
	}
	*range = dest;
	return (i);
}
