/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 18:08:57 by ade-la-c          #+#    #+#             */
/*   Updated: 2019/11/07 18:34:27 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 0 && str[i] <= 31) || (str[i] == 127)
			write()
	}
}

int	main(void)
{
	char str[] = "vive\t la\vvi!"
	ft_putstr_non_printable(str);
	return (0);
}
