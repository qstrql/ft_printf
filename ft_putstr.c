/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjouot <mjouot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 18:40:44 by mjouot            #+#    #+#             */
/*   Updated: 2022/10/07 20:36:21 by mjouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include <unistd.h>

int	ft_putstr(const char *s)
{
	int	i;

	i = 0;
	if (s != 0)
		while (s[i] != '\0')
			i++;
	write(1, s, i);
	return (i);
}
