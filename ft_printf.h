/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcarrasq <hcarrasq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 11:29:56 by hcarrasq          #+#    #+#             */
/*   Updated: 2024/12/03 14:08:00 by hcarrasq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# define LHEX "0123456789abcdef"
# define UHEX "0123456789ABCDEF"

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

int	ft_prtptr(unsigned long long n, char *base, int flag);

int	ft_putchar(int c);

int	ft_putnbr_base(long nbr, int lbase, char *base);

int	ft_putstr(char *str);

int	ft_checkpercentage(const char *str, va_list	args);

int	ft_printf(const char *str, ...);

#endif 