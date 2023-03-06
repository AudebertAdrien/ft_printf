/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr_base.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motoko <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 16:45:34 by motoko            #+#    #+#             */
/*   Updated: 2023/03/06 10:11:31 by aaudeber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printnbr_base(unsigned int nbr, char *base, int count)
{
	unsigned int		base_l;

	base_l = ft_strlen(base);
	if (nbr > base_l)
		count += ft_printnbr_base(nbr / base_l, base, count);
	count += ft_printchar(base[nbr % base_l]);
	return (count);
}
