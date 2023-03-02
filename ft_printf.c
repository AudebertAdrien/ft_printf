/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaudeber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 11:06:57 by aaudeber          #+#    #+#             */
/*   Updated: 2023/03/02 16:28:57 by motoko           ###   ########.fr       */
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
			if (*format == 'i' || *format == 'd')
				ft_putnbr_fd(va_arg(arg_lst, int), 1);
			if (*format == 'c')
				ft_putchar_fd(va_arg(arg_lst, int), 1);
			if (*format == 's') 
				ft_putstr_fd(va_arg(arg_lst, char *), 1);
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
