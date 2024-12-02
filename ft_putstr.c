/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcarrasq <hcarrasq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 16:12:51 by hcarrasq          #+#    #+#             */
/*   Updated: 2024/12/02 17:01:34 by hcarrasq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	if (!str)
		return (ft_putstr("(null)"));
	int	count;

	count = 0;
	while(*str)
	{
		write(1, &*str, 1);
		count++;
		str++;
	}
	return (count);
}
