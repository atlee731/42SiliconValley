/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/27 23:06:39 by alee              #+#    #+#             */
/*   Updated: 2018/07/28 13:26:25 by alee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);
void	sastantua(int size);

void	ft_putchar(char c)
{
	write(1, &c, 1);
	return ;
}

void	sastantua(int size)
{
	int nrows;
	int nrow;
	int ntier;
	int star;

	nrows = size + 3;
	nrow = 0;
	ntier = 0;
	star = 0;
	ft_putchar('/');
	ft_putchar('*');
	ft_putchar('\\');
	ft_putchar('\n');

	return ;
}

int		main(void)
{
	sastantua(3);

	return (0);
}
