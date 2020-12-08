/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 15:12:47 by ade-la-c          #+#    #+#             */
/*   Updated: 2019/11/15 21:05:28 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		base_error(char *base)
{
	int	i;
	int	j;

	i = -1;
	while (base[++i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i;
		while (base[j++])
		{
			if (base[i] == base[j])
				return (0);
		}
	}
	if (i < 2)
		return (0);
	return (1);
}

void	nbr_base_rec(long int nb, char *base, long int size)
{
	if (nb > size - 1)
	{
		nbr_base_rec(nb / size, base, size);
		nbr_base_rec(nb % size, base, size);
	}
	else
		write(1, &base[nb], 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long int i;
	long int nb;

	i = 0;
	nb = nbr;
	if (base_error(base) == 0)
		write(1, "\0", 1);
	else
	{
		while (base[i])
			i++;
		if (nb < 0)
		{
			nb = -nb;
			write(1, "-", 1);
		}
		nbr_base_rec(nb, base, i);
	}
}

int		main(void)
{
	ft_putnbr_base(888, "01");
	return (0);
}
