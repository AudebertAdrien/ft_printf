/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motoko <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 15:08:21 by motoko            #+#    #+#             */
/*   Updated: 2023/03/02 11:22:33 by aaudeber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int	ft_printf(const char *format, ...);

int main (void)
{
	ft_printf("Hello %corld 202%i", 'W', 3);
	printf("\n");
	printf("Hello %corld 202%i", 'W', 3);
	printf("\n");

	ft_printf("%s", "toto");
	printf("\n");
	printf("%s", "toto");
	printf("\n");

	ft_printf("%s", "toto");
	printf("\n");
	printf("%s", "toto");
	printf("\n");

	return 0;
}
