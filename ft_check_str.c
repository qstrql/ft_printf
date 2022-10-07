/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjouot <mjouot@marvin.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 18:29:48 by mjouot            #+#    #+#             */
/*   Updated: 2022/10/08 00:27:02 by mjouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>
#include <stddef.h>
#include <unistd.h>

int	ft_conversion(char c, va_list args)
{
	int	count;

	if (c == 'c')
	{
		ft_putchar(va_arg(args, int));
		return (1);
	}
	else if (c == 's')
	{
		count = ft_putstr(va_arg(args, char *));
		return (count);
	}
	else if (c == 'd' || c == 'i')
	{
		count = ft_printnbr(va_arg(args, int));
		return (count);
	}
	else if (c == 'u')
	{
		count = ft_printnbr(va_arg(args, int));
		return (count);
	}
	else if (c != 'p' && c != 'x' && c != 'X' && c != '%')
		ft_putchar(c);
	return (1);
}

int	ft_conversion_hexa(char c, va_list args)
{
	int			count;
	const char	*hexa_lower = "0123456789abcdef";
	const char	*hexa_upper = "0123456789ABCDEF";

/*	if (c == 'p')
	{
		count = ;
		return (count);
	}*/
	if (c == 'x')
	{
		count = ft_printnbr_base(va_arg(args, int), hexa_lower);
		return (count);
	}
	else if (c == 'X')
	{
		count = ft_printnbr_base(va_arg(args, int), hexa_upper);
		return (count);
	}
	else if (c == '%')
	{
		ft_putchar('%');
		return (1);
	}
	return (0);
}

int	ft_check_str(const char *str, va_list args)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			count += ft_conversion(str[i + 1], args);
			count += ft_conversion_hexa(str[i + 1], args);
			i++;
		}
		else
		{
			write(1, &str[i], 1);
			count++;
		}
		i++;
	}
	return (count);
}
