/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/29 22:01:16 by alee              #+#    #+#             */
/*   Updated: 2018/07/29 23:01:47 by alee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int w, int h)
{
	int x;
	int y;

	x = 0;
	y = 0;
	while (y < h)
	{
		while (x < w)
		{
			if (x == w - 1 && h == 1)
			{
				ft_putchar('\\');
			}
			else if (y == h - 1 && w == 1)
			{
				ft_putchar('\\');
			}
			else if ((x == 0 && y == 0) || (x == w - 1 && y == h - 1))
			{
				ft_putchar('/');
			}
			else if ((x == w - 1 && y == 0) || (x == 0 && y == h - 1))
			{
				ft_putchar('\\');
			}
			else if (y == 0 || y == h - 1 || x == 0 || x == w - 1)
			{
				ft_putchar('*');
			}
			else
			{
				ft_putchar(' ');
			}
			x++;
		}
		ft_putchar('\n');
		y++;
		x = 0;
	}
}
