/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/29 22:37:21 by alee              #+#    #+#             */
/*   Updated: 2018/07/29 22:41:41 by alee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int w, int h)
{
	int x = 0;
	int y = 0;

	while (y < h)
	{
		while (x < w)
		{
			if ((x == 0 && y == 0)||(x == w-1 && y == h-1))
			{
				ft_putchar('A');
			}
			else if ((x == w-1 && y == 0)||(x == 0 && y == h-1))
			{
				ft_putchar('C');
			}
			else if (y == 0 || y == h-1 || x == 0 || x == w-1)
			{
				ft_putchar('B');
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
