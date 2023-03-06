/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr_ptr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motoko <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 16:45:34 by motoko            #+#    #+#             */
/*   Updated: 2023/03/06 11:22:33 by aaudeber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int print_prefix(void)
{
	return (ft_printstr("0x"));		
}

int recurs(unsigned long nbr, char *base, int count)
{
	unsigned long		base_l;

	base_l = ft_strlen(base);
	if (nbr >= base_l)
		count += recurs(nbr / base_l, base, count);
	count += ft_printchar(base[nbr % base_l]);
	return (count);
}

int	ft_printnbr_ptr(unsigned long nbr, char *base, int count)
{	
	if (nbr == 0)
		return (ft_printstr("(nil)"));
	else
	{
		count += print_prefix();
		count += recurs(nbr, base, 0);
	}
	return (count);
}
