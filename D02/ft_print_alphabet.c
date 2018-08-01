/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/25 22:51:40 by alee              #+#    #+#             */
/*   Updated: 2018/07/25 22:58:55 by alee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_putchar(char c);

void ft_print_alphabet(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		ft_putchar(c);
		c++;
	}
	ft_putchar('\n');
	return;
}

int main(void)
{
	ft_print_alphabet();
	return(0);
}
