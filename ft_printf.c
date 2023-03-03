/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaudeber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 11:06:57 by aaudeber          #+#    #+#             */
/*   Updated: 2023/03/03 14:47:50 by motoko           ###   ########.fr       */
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
				count += ft_putchar_i('%');
			
			if (*format == 'i' || *format == 'd')
				count += ft_putnbr_int(va_arg(arg_lst, int), 0);
			if (*format == 'c')
				count += ft_putchar_i(va_arg(arg_lst, int));
			//if (*format == 's') 
			//	ft_putstr(va_arg(arg_lst, char *));

			if (*format == 'x') 
				count += ft_putnbr_base_unsigned(va_arg(arg_lst, unsigned int), "0123456789abcdef", 0);
		}
		else {
			count += ft_putchar_i(*format);
		}
		format++;
	}
	va_end(arg_lst);
	return (count);
}
