/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motoko <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 15:08:21 by motoko            #+#    #+#             */
/*   Updated: 2023/03/03 09:24:30 by aaudeber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int	ft_printf(const char *format, ...);

int main (void)
{
	int	count;
	
	count = 0;

	printf("\n//////////////////\n");
	count = ft_printf("Hello %corld 202%i", 'W', 30);
	printf("\n%d\n", count);
	count = printf("Hello %corld 202%i", 'W', 30);
	printf("\n%d", count);

	printf("\n//////////////////\n");
	
	count = ft_printf("%i", 30);
	printf("\n%d\n", count);
	count = printf("%i", 30);
	printf("\n%d", count);

	printf("\n//////////////////\n");

	count = ft_printf("%s", "toto");
	printf("\n%d\n", count);
	count = printf("%s", "toto");
	printf("\n%d", count);

	printf("\n//////////////////\n");

	ft_printf("%d", 49);
	count = printf("\n%d\n", count);
	printf("%d", 49);
	count = printf("\n%d", count);

	printf("\n//////////////////\n");
	
	count = ft_printf("%d", 118);
	printf("\n%d\n", count);
	count = printf("%d", 118);
	printf("\n%d", count);
	
	printf("\n//////////////////\n");

	ft_printf("%%");
	printf("\n");
	printf("%%");
	
	printf("\n//////////////////\n");

	count = ft_printf("%x", 42);
	printf("\n%d\n", count);
	count = printf("%x", 42);
	printf("\n%d", count);

	printf("\n//////////////////\n");
	return 0;
}
