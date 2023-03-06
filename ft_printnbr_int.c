/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr_int.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motoko <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 17:22:49 by motoko            #+#    #+#             */
/*   Updated: 2023/03/06 10:12:39 by aaudeber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printnbr_int(int n, int count)
{
	unsigned int	s;

	s = 0;
	if (n < 0)
	{
		ft_printchar('-');
		s = n * -1;
		count += 1;
	}
	else
		s = n;
	if (s > 9)
		count += ft_printnbr_int(s / 10, count);
	count += ft_printchar(s % 10 + 48);
	return (count);
}
