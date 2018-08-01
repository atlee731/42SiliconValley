/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/27 23:06:39 by alee              #+#    #+#             */
/*   Updated: 2018/07/29 20:23:01 by alee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
int		calc_base(int size);
void	build_row(int row_number, int tier_number, int base);
void	sastantua(int size);

void	ft_putchar(char c)
{
	write(1, &c, 1);
	return ;
}

int		calc_base(int size)
{
	int tier;
	int width;
	int tier_step;

	tier = 1;
	width = 1;
	tier_step = 4;
	while (tier <= size)
	{
		width += 2 * (2 + tier);
		tier++;
		width += tier_step;
		if (tier % 2 && tier < size)
			tier_step += 2;
	}
	width -= tier_step;
	return (width);
}

void	repeat_char(char c, int num)
{
	int i;

	i = 0;
	while (i < num)
	{
		ft_putchar(c);
		i++;
	}
}
void	build_row(int row_number, int tier_number, int base)
{
/*
	int i;

	i = 0;
	while (i < (base - 2 * row_number - 4 * tier_number - 3) / 2)
	{
		ft_putchar(' ');
		i++;
	}
	ft_putchar('/');
	i = 0;
	while (i < row_number)
	{
		ft_putchar('*');
		i++;
	}
	i = 0;
	while (i < 4 * tier_number + 1)
	{
		ft_putchar('*');
		i++;
	}
	i = 0;
	while (i < row_number)
	{
		ft_putchar('*');
		i++;
	}
	i = 0;
	ft_putchar('\\');
	while (i < (base - 2 * row_number - 4 * tier_number - 3) / 2)
	{
		ft_putchar(' ');
		i++;
	}
	*/
	repeat_char(' ', (base - 2 * row_number - 4 * tier_number - 3) / 2);
	ft_putchar('/');
	repeat_char('*', row_number);
	repeat_char('*', 4 * tier_number + 1);
	repeat_char('*', row_number);
	ft_putchar('\\');
	repeat_char(' ', (base - 2 * row_number - 4 * tier_number - 3) / 2);
}

void	sastantua(int size)
{
	int tier_row;
	int nrow;
	int ntier;

	ntier = 0;
	nrow = 0;
	while (ntier < size)
	{
		tier_row = 0;
		while (tier_row < ntier + 3)
		{
			build_row(nrow, ntier, calc_base(size));
			ft_putchar('\n');
			tier_row++;
			nrow++;
		}
		ntier++;
	}
	return ;
}

int		main(void)
{
	sastantua(3);
	return (0);
}
