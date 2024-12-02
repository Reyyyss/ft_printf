/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcarrasq <hcarrasq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 11:29:56 by hcarrasq          #+#    #+#             */
/*   Updated: 2024/12/02 16:35:37 by hcarrasq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>
#include <unistd.h>

#include <stdio.h>

int ft_prtptr(unsigned long int n, char *base, int flag);

int	ft_putchar(int c);

int	ft_putnbr_base(long nbr, int lbase,char *base);

int	ft_putstr(char *str);

int	ft_checkpercentage(const char *str, va_list	args);

#endif 