/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/27 23:15:11 by alee              #+#    #+#             */
/*   Updated: 2018/07/28 12:37:47 by alee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_fibonacci(int index);

int		ft_fibonacci(int index)
{
	int result;

	result = 1;
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	if (index == 2)
		return (1);
	if (index > 2)
	{
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	}
	else
		return (-1);
}
