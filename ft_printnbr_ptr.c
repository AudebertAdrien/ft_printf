/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr_ptr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motoko <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 16:45:34 by motoko            #+#    #+#             */
/*   Updated: 2023/03/03 17:20:36 by motoko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_printnbr_ptr(unsigned long nbr, char *base, int count)
{
	unsigned long		base_l;
	
	base_l = ft_strlen(base);
	if (nbr > base_l)
		count += ft_printnbr_ptr(nbr / base_l, base, count);
	count += ft_printchar(base[nbr % base_l]);
	return (count);
}
