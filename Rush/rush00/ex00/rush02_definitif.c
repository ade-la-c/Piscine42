/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarais <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/02 08:20:36 by lmarais           #+#    #+#             */
/*   Updated: 2019/11/03 08:34:03 by lturbang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_first_line(int x)
{
	int i;

	ft_putchar('A');
	if (x > 1)
	{
		i = 2;
		while (i != x)
		{
			ft_putchar('B');
			i++;
		}
		ft_putchar('A');
	}
	ft_putchar('\n');
}

void	ft_last_line(int x)
{
	int i;

	ft_putchar('C');
	if (x > 1)
	{
		i = 2;
		while (i != x)
		{
			ft_putchar('B');
			i++;
		}
		ft_putchar('C');
	}
	ft_putchar('\n');
}

void	ft_inter_line(int x)
{
	int i;

	ft_putchar('B');
	if (x > 1)
	{
		i = 2;
		while (i != x)
		{
			ft_putchar(' ');
			i++;
		}
		ft_putchar('B');
	}
	ft_putchar('\n');
}

void	ft_inter_inter_line(int x, int y)
{
	int i;

	i = 2;
	ft_first_line(x);
	while (i != y)
	{
		ft_inter_line(x);
		i++;
	}
	ft_last_line(x);
}

void	rush(int x, int y)
{
	if (y > 0 && x > 0)
	{
		if (y == 1)
		{
			ft_first_line(x);
		}
		else if (y == 2)
		{
			ft_first_line(x);
			ft_last_line(x);
		}
		else
		{
			ft_inter_inter_line(x, y);
		}
	}
	else
	{
		write(1, "ERREUR\n", 7);
	}
}
