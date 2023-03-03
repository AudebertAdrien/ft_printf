/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motoko <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 15:08:21 by motoko            #+#    #+#             */
/*   Updated: 2023/03/03 09:03:20 by aaudeber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int	ft_printf(const char *format, ...);

int main (void)
{
	int	count;
	
	count = 0;
	count = ft_printf("Hello %corld 202%i", 'W', 3);
	printf("\n%d\n", count);
	count = printf("Hello %corld 202%i", 'W', 3);
	printf("\n%d\n", count);

	count = ft_printf("%s", "toto");
	printf("\n%d\n", count);
	count = printf("%s", "toto");
	printf("\n%d\n", count);

	count = ft_printf("%d", 49);
	printf("\n%d\n", count);
	count = printf("%d", 49);
	printf("\n%d\n", count);

	return 0;
}
