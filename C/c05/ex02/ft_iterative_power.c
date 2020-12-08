/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 15:20:37 by ade-la-c          #+#    #+#             */
/*   Updated: 2019/11/15 14:49:22 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int	n;

	n = nb;
	if ((nb == 0 && power == 0) || (power == 0))
		return (1);
	if (power < 0)
		return (0);
	while (power > 1)
	{
		nb *= n;
		power--;
	}
	return (nb);
}
