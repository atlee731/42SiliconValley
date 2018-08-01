/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/27 23:15:11 by alee              #+#    #+#             */
/*   Updated: 2018/07/28 12:22:45 by alee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recusive_power(int nb, int power);

int		ft_recursive_power(int nb, int power)
{
	int result;

	result = 1;
	if (power == 0)
		return (1);
	if (nb >= 0 && nb % 1 == 0 && power > 0)
	{
		return (nb * ft_recursive_power(nb, power - 1));
	}
	else
		return (0);
}
