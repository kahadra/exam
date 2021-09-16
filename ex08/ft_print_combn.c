# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
#                                                     +:+ +:+         +:+      #
#    By: chpark <chpark@student.42seoul.kr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/14 13:43:07 by chpark            #+#    #+#              #
/*   Updated: 2021/09/16 14:38:48 by chpark           ###   ########.fr       */
#                                                                              #
# **************************************************************************** #

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_num(int *tab, int n);
{
	int	i;

	if (tab[n - 1] == 0 || n >= 10 || n <= 0)
		break ;
	i = 0;
	while (i <= (n-1))
	{
		ft_putchar(tab[i] + 48);
		i++;
	}
	if (i > n && tap[0] != (10 - n))
	{
		ft_putchar(",");
		ft_putchar(" ");
	}
}

void	ft_print_combn(int n)
{
	int i;
	int tab[10];

	i = 0;
	while (i < n)
		tab[i] = i;	
	while (tab[0] <= (10 - n) && n >= 1)
	{
		ft_print_num(tab, n);
		tab[n - 1]++;
		if (tab[i] >= tab[i+1])
			break ;
		i = n;
		while(i && n > 1)
		{
			i--;
			if (tab[i] > 9)
			{
				tab[i-1]++;
				tab[i] = 0;
			}
		}
	}
}

int	main(void)
{
	ft_print_combn(3);
	return (0);
}
