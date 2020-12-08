/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 11:41:57 by ade-la-c          #+#    #+#             */
/*   Updated: 2019/11/14 14:49:46 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[i] == '\0')
		return (str);
	if (str == 0)
		return (NULL);
	while (str[i])
	{
		j = 0;
		while (str[i + j] == to_find[j] && str[j])
			j++;
		if (to_find[j] == 0)
			return (&str[i]);
		i++;
	}
	return (NULL);
}
