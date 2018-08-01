/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/30 15:44:45 by alee              #+#    #+#             */
/*   Updated: 2018/07/30 16:59:51 by alee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_atoi(char *str);
int		find_len(char *str);

int		find_len(char *str)
{
	int len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

int		ft_atoi(char *str)
{
	int index;
	int power;
	int out;
	int len;
	int digit;

	len = find_len(str);
	printf("%i", len);
	index = 0;
	out = 0;
	while (index < len)
	{
		power = 0;
		digit = str[len - index - 1] - '0';
		while (power < index)
		{
			digit *= 10;
			power++;	
		}
		out += digit;
		printf("%i\n", out);
		index++;
	}
	return (out);
}

int		main(void)
{
	ft_atoi("-424242");
}
