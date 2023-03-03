/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaudeber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 11:06:57 by aaudeber          #+#    #+#             */
/*   Updated: 2023/03/03 18:07:14 by motoko           ###   ########.fr       */
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
				count += ft_printchar('%');
			if (*format == 'i' || *format == 'd')
				count += ft_printnbr_int(va_arg(arg_lst, int), 0);
			if (*format == 'c')
				count += ft_printchar(va_arg(arg_lst, int));
			if (*format == 's')
				count += ft_printstr(va_arg(arg_lst, const char *));
			if (*format == 'x') 
				count += ft_printnbr_base(va_arg(arg_lst, unsigned int), "0123456789abcdef", 0);
			if (*format == 'X') 
				count += ft_printnbr_base(va_arg(arg_lst, unsigned int), "0123456789ABCDEF", 0);
			if (*format == 'p') 
			{
				count += write(1, "0x", 2);
				count += ft_printnbr_ptr(va_arg(arg_lst, unsigned long), "0123456789abcdef", 0);
			}
		}
		else {
			count += ft_printchar(*format);
		}
		format++;
	}
	va_end(arg_lst);
	return (count);
}
