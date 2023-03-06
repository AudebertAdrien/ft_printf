/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motoko <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 15:08:21 by motoko            #+#    #+#             */
/*   Updated: 2023/03/06 17:07:49 by aaudeber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int main (void)
{
	int	count;
	
	count = 0;
	printf("//////////////////\n");

	count = ft_printf("%d - %c - %x : \n", 12, 65, 16);
	printf(" => %d\n", count);
	count = printf("%d - %c - %x : \n", 12, 65, 16);
	printf(" => %d\n", count);

	printf("//////////////////\n");

	count = ft_printf("%d%d%s : \n", 12, 65, "");
	printf(" => %d\n", count);
	count = printf("%d%d%s : \n", 12, 65, "");
	printf(" => %d\n", count);

	printf("//////////////////\n");

	printf("%% : \n");
	count = ft_printf("%%");
	printf(" => %d\n", count);
	count = printf("%%");
	printf(" => %d\n", count);

	printf("//////////////////\n");

	printf("i :\n");
	count = ft_printf("20%i", 23);
	printf(" => %d\n", count);
	count = printf("20%i", 23);
	printf(" => %d\n", count);

	printf("i :\n");
	count = ft_printf("%i", 0);
	printf(" => %d\n", count);
	count = printf("%i", 0);
	printf(" => %d\n", count);

	printf("i :\n");
	count = ft_printf("%i", -2147483649);
	printf(" => %d\n", count);
	count = printf("%i", -2147483649);
	printf(" => %d\n", count);


	printf("//////////////////\n");
	
	printf("d :\n");
	count = ft_printf("%d", 118);
	printf(" => %d\n", count);
	count = printf("%d", 118);
	printf(" => %d\n", count);

	count = ft_printf("%d", -50);
	printf(" => %d\n", count);
	count = printf("%d", -50);
	printf(" => %d\n", count);

	printf("//////////////////\n");


	printf("u :\n");
	count = ft_printf("%u", 51234);
	printf(" => %d\n", count);
	count = printf("%u", 51234);
	printf(" => %d\n", count);


	printf("//////////////////\n");

	printf("c :\n");
	count = ft_printf("Hello %corld", 'W');
	printf(" => %d\n", count);
	count = printf("Hello %corld", 'W');
	printf(" => %d\n", count);


	printf("//////////////////\n");

	printf("x :\n");
	count = ft_printf("%x", 16);
	printf(" => %d\n", count);
	count = printf("%x", 16);
	printf(" => %d\n", count);
	count = ft_printf("%x", -10);
	printf(" => %d\n", count);
	count = printf("%x", -10);
	printf(" => %d\n", count);

	printf("//////////////////\n");

	printf("X :\n");
	count = ft_printf("%X", -500);
	printf(" => %d\n", count);
	count = printf("%X", -500);
	printf(" => %d\n", count);

	printf("//////////////////\n");

	int *addr;
	addr = (void *)10;
	printf("p :\n");
	count = ft_printf("%p", addr);
	printf(" => %d\n", count);
	count = printf("%p", addr);
	printf(" => %d\n", count);

	printf("//////////////////\n");
	
	printf("s :\n");
	count = ft_printf("%s", "toto");
	printf(" => %d\n", count);
	count = printf("%s", "toto");
	printf(" => %d\n", count);

	count = ft_printf("%s", NULL);
	printf(" => %d\n", count);
	count = printf("%s", NULL);
	printf(" => %d\n", count);
	

	printf("//////////////////\n");
	return 0;
}
