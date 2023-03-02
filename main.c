/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motoko <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 15:08:21 by motoko            #+#    #+#             */
/*   Updated: 2023/03/02 16:28:48 by motoko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int	ft_printf(const char *format, ...);

int main (void)
{
	ft_printf("Hello %corld 202%i", 'W', 3);
	printf("\n");
	printf("Hello %corld 202%i", 'W', 3);

	printf("\n//////////////////\n");

	ft_printf("%s", "toto");
	printf("\n");
	printf("%s", "toto");

	printf("\n//////////////////\n");

	ft_printf("%d", 49);
	printf("\n");
	printf("%d", 49);

	printf("\n//////////////////\n");
	
	ft_printf("%d", 118);
	printf("\n");
	printf("%d", 118);
	
	printf("\n//////////////////\n");

	ft_printf("%x", 42);
	printf("\n");
	printf("%x", 42);

	printf("\n//////////////////\n");

	return 0;
}
