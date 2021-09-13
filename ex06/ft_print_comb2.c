/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chpark <chpark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 22:00:33 by chpark            #+#    #+#             */
/*   Updated: 2021/09/13 22:28:53 by chpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnum(int i, int j)
{
	int	a;
	int	b;
	int	c;
	int	d;

	a = (i / 10) + '0';
	b = (i % 10) + '0';
	c = (j / 10) + '0';
	d = (j % 10) + '0';
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, " ", 1);
	write(1, &c, 1);
	write(1, &d, 1);
	if (i != 98 || j != 99)
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while(j <= 99)
		{
			ft_putnum(i, j);
			j++;
		}
		i++;
	}
}
