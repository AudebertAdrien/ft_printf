/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motoko <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 15:08:21 by motoko            #+#    #+#             */
/*   Updated: 2023/03/02 10:05:26 by aaudeber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_printf(const char *format, ...)
{
	int	count;
	va_list arg_lst;

	va_start(arg_lst, format);
	count = 0;
	while (*format) {
		if (*format == '%') {
			format++;
			if (*format == 'i') {
				ft_putnbr_fd(va_arg(arg_lst, int), 1);
			}
			if (*format == 'c') {
				ft_putchar_fd(va_arg(arg_lst, int), 1);
			}
		}
		else {
			ft_putchar_fd(*format, 1);
		}
		count++;
		format++;	
	}
	va_end(arg_lst);
	return (count);
}

int main (void)
{
	int	i;
	int	res;
	char	c;

	res = 0;
	c = 'W';
	i = 3;
	res = ft_printf("Hello %corld 202%i", c, i);
//	printf("\n");
//	printf("res : %d\n", res);
	return 0;
}
