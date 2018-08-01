/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/25 23:03:59 by alee              #+#    #+#             */
/*   Updated: 2018/07/26 11:53:32 by alee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	print_htu(char h, char t, char u)
{
	ft_putchar(h);
	ft_putchar(t);
	ft_putchar(u);
	ft_putchar(',');
	ft_putchar(' ');
}

int		check_dup(char h, char t, char u)
{
	if (h != t)
	{
		if (h != u)
		{
			if (t != u)
			{
				return (1);
			}
		}
	}
	else
	{
		return (0);
	}
}

void	ft_print_comb(void)
{
	char h;
	char t;
	char u;

	h = '0';
	t = '1';
	while (h <= '6')
	{
		t = h;
		while (t <= '9')
		{
			u = t;
			while (u <= '9')
			{
				if (check_dup(h, t, u))
				{
					print_htu(h, t, u);
				}
				u++;
			}
			t++;
		}
		h++;
	}
	return ;
}

int		main(void)
{
	ft_print_comb();
	ft_putchar('7');
	ft_putchar('8');
	ft_putchar('9');
	ft_putchar('\n');
	return (0);
}
