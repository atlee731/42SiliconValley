/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/27 23:15:11 by alee              #+#    #+#             */
/*   Updated: 2018/07/28 12:20:21 by alee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb);

int		ft_iterative_factorial(int nb)
{
	int	result;

	if (nb >= 0 && nb % 1 == 0)
	{
		result = 1;
		while (nb > 0)
		{
			result = result * nb;
			nb--;
		}
		return (result);
	}
	else
		return (0);
}
