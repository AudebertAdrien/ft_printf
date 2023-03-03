/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motoko <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 15:08:21 by motoko            #+#    #+#             */
/*   Updated: 2023/03/03 09:11:55 by aaudeber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int	ft_printf(const char *format, ...);

int main (void)
{
//<<<<<<< HEAD
//	int	count;
//	
//	count = 0;
//	count = ft_printf("Hello %corld 202%i", 'W', 3);
//	printf("\n%d\n", count);
//	count = printf("Hello %corld 202%i", 'W', 3);
//	printf("\n%d\n", count);
//
//	count = ft_printf("%s", "toto");
//	printf("\n%d\n", count);
//	count = printf("%s", "toto");
//	printf("\n%d\n", count);
//
//	count = ft_printf("%d", 49);
//	printf("\n%d\n", count);
//	count = printf("%d", 49);
//	printf("\n%d\n", count);
//=======
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

	ft_printf("%%");
	printf("\n");
	printf("%%");
	
	printf("\n//////////////////\n");

	ft_printf("%x", 42);
	printf("\n");
	printf("%x", 42);

	printf("\n//////////////////\n");
	return 0;
}
