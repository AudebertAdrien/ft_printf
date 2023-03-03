/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaudeber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 11:06:57 by aaudeber          #+#    #+#             */
/*   Updated: 2023/03/03 09:12:14 by aaudeber         ###   ########.fr       */
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
			if (*format == '%' && *(format - 1) == '%')
				ft_putchar('%');
			if (*format == 'i' || *format == 'd')
				ft_putnbr(va_arg(arg_lst, int));
			if (*format == 'c')
				ft_putchar(va_arg(arg_lst, int));
			if (*format == 's') 
				ft_putstr(va_arg(arg_lst, char *));
			if (*format == 'x') 
				ft_putnbr_base(va_arg(arg_lst, int), "0123456789abcdef");
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
