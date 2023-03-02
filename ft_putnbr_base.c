/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motoko <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 16:45:34 by motoko            #+#    #+#             */
/*   Updated: 2023/03/02 16:48:13 by motoko           ###   ########.fr       */
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

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int		base_l;
	unsigned int		nb;

	base_l = ft_strlen(base);
	if (is_error(base))
		return ;
	if (nbr < 0)
	{
		nb = nbr * -1;
		ft_putchar('-');
	}
	else
		nb = nbr;
	if (nb > base_l)
		ft_putnbr_base(nb / base_l, base);
	ft_putchar(base[nb % base_l]);
}
