# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
#                                                     +:+ +:+         +:+      #
#    By: chpark <chpark@student.42seoul.kr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/14 13:43:07 by chpark            #+#    #+#              #
/*   Updated: 2021/09/14 14:50:01 by chpark           ###   ########.fr       */
#                                                                              #
# **************************************************************************** #

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	