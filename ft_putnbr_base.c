/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjouot <mjouot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 17:14:13 by mjouot            #+#    #+#             */
/*   Updated: 2022/10/07 13:39:00 by mjouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

int	ft_putnbr_base(unsigned int nbr, const char *base)
{
	unsigned int	i;
	unsigned int	last_nbr;

	i = 0;
	if (nbr == 0)
		ft_putchar(base[0]);
	
	if (nbr < 0)
	{
		nbr *= -1;
		ft_putchar('-');
	}
	if (nbr != 0)
	{
		last_nbr = nbr % ft_strlen(base);
		nbr = nbr / ft_strlen(base);
		if (nbr < 0)
			nbr *= -1;
		if (nbr != 0)
			ft_putnbr_base(nbr, base);
		ft_putchar(base[last_nbr]);
	}
	i++;
	return (i);
}
