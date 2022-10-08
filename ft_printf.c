/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjouot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 15:42:09 by mjouot            #+#    #+#             */
/*   Updated: 2022/10/08 14:46:45 by mjouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

#include <stdio.h>
int	ft_printf(const char *str, ...)
{
	int		count;
	va_list	args;

	if (str == 0)
		return (0);
	va_start(args, str);
	count = ft_check_str(str, args);
	va_end(args);
	printf("count : %d count\n\n", count);
	return (count);
}

int	main(void)
{
	int d = 125;
	char c = 'z';
	char *s = "allo ca va";
	int i = 200;
	unsigned int u = -42;
	int x = 299;
	int	X = 23;
	char  **p = &s;
	
	ft_printf("d : %d\nc : %c\ns : %s\ni : %i\nu : %u\no : %o\np : %p\nx : %x\nX : %X\n% : %%\n", d, c, s, i, u, p, x, X);
	ft_printf("salut comment ca va la zone?\n");
	ft_printf("francis a %d ans\n", d);
}
