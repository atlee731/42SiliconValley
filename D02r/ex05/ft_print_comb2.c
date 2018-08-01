/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/25 23:03:59 by alee              #+#    #+#             */
/*   Updated: 2018/07/26 13:14:41 by alee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	print_htu(char t1, char u1, char t2, char u2)
{
	ft_putchar(t1);
	ft_putchar(u1);
	ft_putchar(' ');
	ft_putchar(t2);
	ft_putchar(u2);
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

void	ft_print_comb2(void)
{
	int n1;
	int n2;

	n1 = 0;
	while(n1<=98)
	{
		n2=n1+1;
		while(n2<=99)
		{
			print_htu(n1/10, n1%101, n2/10, n2%10);
			n2++;
		}
		n1++;
	}
}

int		main(void)
{
	ft_print_comb2();
	return (0);
}
