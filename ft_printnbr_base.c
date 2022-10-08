/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr_base.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjouot <mjouot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 17:14:13 by mjouot            #+#    #+#             */
/*   Updated: 2022/10/08 15:31:38 by mjouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

static int	ft_getcount(int n)
{
	int		i;

	i = 0;
	if (n <= 0)
		i++;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static void	ft_putnbr_base(int n, const char *base)
{
	int	last_n;

	if (n == 0)
		ft_putchar(base[0]);
	if (n < 0)
	{
		n *= -1;
		write(1, "-", 1);
	}
	if (n != 0)
	{
		last_n = n % ft_strlen(base);
		n = n / ft_strlen(base);
		if (n != 0)
			ft_putnbr_base(n, base);
		ft_putchar(base[last_n]);
	}
}

static void ft_usign_putnbr_base(unsigned int n, const char *base)
{
 	unsigned int	last_n;

	if (n == 0)
		ft_putchar(base[0]);
	if (n != 0)
	{
		last_n = n % ft_strlen(base);
		n = n / ft_strlen(base);
		if (n != 0)
			ft_putnbr_base(n, base);
		ft_putchar(base[last_n]);
	}
}	

int	ft_printnbr_base(int n, const char *base)
{
	int	count;

	count = ft_getcount(n);
	ft_putnbr_base(n, base);
	return (count);
}

