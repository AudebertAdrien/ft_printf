/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motoko <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 15:08:21 by motoko            #+#    #+#             */
/*   Updated: 2023/03/01 17:00:20 by motoko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

int	ft_printf(const char *format, ...)
{
	int	res;
	va_list arg_lst;

	va_start(arg_lst, format);

	while (*format) {
		if (*format == '%') {
			format++;
			if (*format == 'i') {
				//printf("i\n");	
				res = va_arg(arg_lst, int);
				//printf("res %d\n", res);
				write(1, &format ,1);
			}
			if (*format == 'c') {
				//printf("c\n");
				res = va_arg(arg_lst, int);
				//printf("res %d\n", res);
				write(1, &format ,1);
			}
		}
		else {
			write(1, format, 1);
		}
		format++;	
	}
	va_end(arg_lst);
	return (0);
}

int main (void)
{
	int	i;
	char	c;

	c = 'W';
	i = 3;
	ft_printf("Hello %corld 202%i", c, i);
	return 0;
}
