/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjouot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 15:42:09 by mjouot            #+#    #+#             */
/*   Updated: 2022/10/06 21:20:02 by tdubois          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

int ft_printf(const char *str, ...)
{
	va_list args;

	
	va_start(args, str);
	ft_check_str(str, args);
	va_end(args);
	return ;
}
