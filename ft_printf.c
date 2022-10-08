/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjouot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 15:42:09 by mjouot            #+#    #+#             */
/*   Updated: 2022/10/08 19:41:01 by mjouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

//#include <stdio.h>
int	ft_printf(const char *str, ...)
{
	int		count;
	va_list	args;

	if (str == 0)
		return (0);
	va_start(args, str);
	count = ft_check_str(str, args);
	va_end(args);
//	printf("count : %d count\n\n", count);
	return (count);
}
/*
#include <limits.h>
int	main(void)
{
	int d = -2147483648;
	char c = 'z';
	char *s = NULL;
	int i = 200;
	unsigned int u = -42;
	int x = -11;
	int	X = 23;
	char  **p = NULL;
	
	ft_printf("d : %d\nc : %c\ns : %s\ni : %i\nu : %u\no : %o\np : %p\nx : %x\nX : %X\n% : %%\n", d, c, s, i, u, p, x, X);
	ft_printf("salut comment ca va la zone?\n");
	ft_printf("\n%p\n", p);
	printf("\n%d\n", printf("%p", p));
}*/
