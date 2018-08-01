/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush0X.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzheng <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/29 16:12:27 by zzheng            #+#    #+#             */
/*   Updated: 2018/07/29 16:16:48 by zzheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putchar.c"

void	rush(int x, int y)
{
	int countx;
	int county;

	county = 1;
	while (county != y + 1)
	{
		countx = 1;
		while (countx != x + 1)
		{
			if ((county == 1 || county == y) && (countx == 1 || countx == x))
				ft_putchar('o');
			else if (countx == 1 || countx == x)
				ft_putchar('|');
			else if (county == 1 || county == y)
				ft_putchar('-');
			else
				ft_putchar(' ');
			countx++;
		}
		ft_putchar('\n');
		county++;
	}
}
