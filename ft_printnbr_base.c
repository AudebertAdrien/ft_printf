/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr_base.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motoko <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 16:45:34 by motoko            #+#    #+#             */
/*   Updated: 2023/03/03 15:50:37 by motoko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_error(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (!base || ft_strlen(base) < 2)
		return (1);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (1);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	ft_printnbr_base(unsigned int nbr, char *base, int count)
{
	unsigned int		base_l;

	base_l = ft_strlen(base);
	if (is_error(base))
		return (0);
	if (nbr > base_l)
	{
		count += ft_printnbr_base(nbr / base_l, base, count);
	}
	count += 1;
	ft_printchar(base[nbr % base_l]);
	return (count);
}
