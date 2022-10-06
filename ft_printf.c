/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjouot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 15:42:09 by mjouot            #+#    #+#             */
/*   Updated: 2022/10/06 18:40:53 by mjouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

int ft_printf(const char *str, ...)
{
	va_list args;

	va_start(args, str);
	ft_check_str(str, va_list);
	va_end(args);
	return ;
}
