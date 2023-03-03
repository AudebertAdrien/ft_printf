/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motoko <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 17:22:49 by motoko            #+#    #+#             */
/*   Updated: 2023/03/03 13:54:14 by motoko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr_int(int n, int count)
{
	unsigned int	s;

	s = 0;
	if (n < 0)
	{
		ft_putchar_i('-');
		s = n * -1;
		count += 1;
	}
	else
		s = n;
	if (s > 9)
	{
		count += 1;
		ft_putnbr_int(s / 10, count);
	}
	count += 1;
	ft_putchar_i(s % 10 + 48);
	return (count);
}
