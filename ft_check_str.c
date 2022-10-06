/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjouot <mjouot@marvin.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 18:29:48 by mjouot            #+#    #+#             */
/*   Updated: 2022/10/06 21:19:55 by tdubois          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>
#include <stddef.h>
#include <unistd.h>

int	ft_conversion(char c, const char *str, va_list args)
{
	//check cspdiuxX%
	if (c == 'c')
		ft_putchar_fd(c, 1);
	else if (c == 's')
		ft_putstr_fd(str, 1);
	else if (c == 'p')
		return ;
	else if (c == 'd' || c == 'i')
		ft_putnbr_fd((int)str, 1);
	else if (c == 'u')
		ft_putnbr_fd((unsigned int)str, 1);
	else if (c == 'x')
		return ;
	else if (c == 'X')
		return ;
	else if (c == '%')
		write(1, '%', 1);

	return ;
}

int	ft_check_str(const char *str, va_list args)
{
	size_t	str_len;
	size_t	i;
	
	str_len = ft_strlen(str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
			ft_conversion(&str[i - 1]);
		i++;
	}
	return ;
}
