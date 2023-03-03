/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motoko <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 15:08:21 by motoko            #+#    #+#             */
/*   Updated: 2023/03/03 14:42:45 by motoko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main (void)
{
	int	count;
	
	count = 0;
	printf("\n//////////////////\n");

	count = ft_printf("%%");
	printf("\n%d\n", count);
	count = printf("%%");
	printf("\n%d", count);

	printf("\n//////////////////\n");

	count = ft_printf("20%i", 23);
	printf("\n%d\n", count);
	count = printf("20%i", 23);
	printf("\n%d", count);

	printf("\n//////////////////\n");

	count = ft_printf("Hello %corld", 'W');
	printf("\n%d\n", count);
	count = printf("Hello %corld", 'W');
	printf("\n%d", count);


	printf("\n//////////////////\n");

	count = ft_printf("%x", 42);
	printf("\n%d\n", count);
	count = printf("%x", 42);
	printf("\n%d", count);


	printf("\n//////////////////\n");

	count = ft_printf("%x", -500);
	printf("\n%d\n", count);
	count = printf("%x", -500);
	printf("\n%d", count);



	/*
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
	printf("\n//////////////////\n");
	*/
	return 0;
}
