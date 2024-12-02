/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcarrasq <hcarrasq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 11:01:50 by hcarrasq          #+#    #+#             */
/*   Updated: 2024/12/02 17:07:03 by hcarrasq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf(const char *str, ...)
{
	va_list	args;
	int		count;

	va_start(args, str);
	count = 0;
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			count += ft_checkpercentage(str, args);
		}
		else
		{
			write(1, &*str, 1);
			count++;
		}
		str++;
	}
	va_end(args);
	return (count);
}

int	ft_checkpercentage(const char *str, va_list	args)
{
	int	count;

	if (*str == 'c')
		count =	ft_putchar(va_arg(args, int));
	if (*str == 's')
		count = ft_putstr(va_arg(args, char *));
	if (*str == 'p')
		count = ft_prtptr(va_arg(args, unsigned long), "0123456789", 0);
	if (*str == 'd' || *str == 'i')
		count = ft_putnbr_base(va_arg(args, int), 10, "0123456789");
	if (*str == 'u')
		count =	ft_putnbr_base(va_arg(args, unsigned int), 10, "0123456789");
	if (*str == 'x')
		count = ft_putnbr_base(va_arg(args, unsigned int), 16, "0123456789abcdef");
	if (*str == 'X') 
		count = ft_putnbr_base(va_arg(args, unsigned int), 16, "0123456789ABCDEF");
	if (*str == '%')
		count = ft_putchar('%');
	return (count);
}