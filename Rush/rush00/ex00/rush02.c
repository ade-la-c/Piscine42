/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/02 11:04:52 by ade-la-c          #+#    #+#             */
/*   Updated: 2019/11/03 16:10:09 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putchar.c"

void	midline(int v);

void	endline(int h, int b);

void	rush(int h, int v)
{
	int b;
	int d;

	if (h <= 0 || v <= 0)
		write(1, "error, value must be positive", 29);
	else if (h == 1 && v == 1)
		ft_putchar('A');
	else
		ft_putchar('A');
	b = 0;
	while (b < h - 2)
	{
		ft_putchar('B');
		b++;
	}
	if (h != 1)
		ft_putchar('A');
	write(1, "\n", 2);
	d = 0;
	while (d < v - 2)
	{
		midline(h);
		d++;
		write(1, "\n", 2);
	}
	if (v != 1)
	{
		endline(h, b);
		write(1, "\n", 2);
	}
}

void	midline(int h)
{
	int c;

	ft_putchar('B');
	c = 0;
	while (c < h - 2)
	{
		ft_putchar(' ');
		c++;
	}
	if (h != 1)
		ft_putchar('B');
}

void	endline(int h, int b)
{
	ft_putchar('C');
	if (h > 1)
	{
		b = 0;
		while (b < h - 2)
		{
			ft_putchar('B');
			b++;
		}
		ft_putchar('C');
	}
}
