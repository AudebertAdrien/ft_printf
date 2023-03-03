/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaudeber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 11:06:57 by aaudeber          #+#    #+#             */
/*   Updated: 2023/03/02 15:45:44 by aaudeber         ###   ########.fr       */
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
			if (*format == 'i')
				ft_putnbr_fd(va_arg(arg_lst, int), 1);
			if (*format == 'c')
				ft_putchar_fd(va_arg(arg_lst, int), 1);
			if (*format == 's') 
				ft_putstr_fd(va_arg(arg_lst, char *), 1);
			if (*format == 'd') 
				ft_itoa(va_arg(arg_lst, int));
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
