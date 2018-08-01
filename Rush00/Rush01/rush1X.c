/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush1X.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzheng <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/29 16:20:34 by zzheng            #+#    #+#             */
/*   Updated: 2018/07/29 16:32:22 by zzheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putchar.c"

void	rush(int x, int y)
{
	int countx;
	int county;

	county = 1;
	if (x != 1 && y != 1)
	{
		while (county != y + 1)
		{
			countx = 1;
			while (countx != x + 1)
			{
				if (((countx == 1 && county == 1) || (county == y && countx == x)))
					ft_putchar('/');
				else if ((countx == x && county == 1) || (county == y && countx == 1))
					ft_putchar('\\');
				else if (countx == 1 || countx == x || county == 1 || county == y)
					ft_putchar('*');
				else
					ft_putchar(' ');
				countx++;
			}
			ft_putchar('\n');
			county++;
		}
	}
	else
	{
		while (county != y + 1)
		{
			countx = 1;
			while (countx != x + 1)
			{
				if (countx == 1 && county == 1)
					ft_putchar('/');
				else if ((countx == x && county == 1) || (county == y && countx == 1))
					ft_putchar('\\');
				else
					ft_putchar('*');
				countx++;
			}
			ft_putchar('\n');
			county++;
		}
	}
}
