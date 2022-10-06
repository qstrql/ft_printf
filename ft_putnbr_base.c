/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjouot <mjouot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 17:14:13 by mjouot            #+#    #+#             */
/*   Updated: 2022/08/29 11:55:43 by mjouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	is_base_ok(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] != '\0')
	{
		j = i + 1;
		if (base[i] == '+' || base[i] == '-')
			return (0);
		if (base[i] < ' ' || base[i] > '~')
			return (0);
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
			return (0);
			j++;
		}
		i++;
	}
}
void	ft_putnbr_base(int nbr, char *base)
{
	int	i;
	int	last_nbr;

	i = 0;
	if (is_base_ok(base) == 1)
	{
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
	}
}
