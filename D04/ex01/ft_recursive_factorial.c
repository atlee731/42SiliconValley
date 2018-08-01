/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/27 23:15:11 by alee              #+#    #+#             */
/*   Updated: 2018/07/28 11:38:16 by alee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb);

int		ft_recursive_factorial(int nb)
{
	if (nb == 0)
		return (1);
	if (nb >= 1 && nb % 1 == 0)
	{
		return (nb * ft_recursive_factorial(nb - 1));
	}
	else
		return (0);
}
