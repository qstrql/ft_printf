/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjouot <mjouot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 18:40:44 by mjouot            #+#    #+#             */
/*   Updated: 2022/10/07 19:23:45 by mjouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include <unistd.h>

int	ft_putstr(const char *s)
{
	int i;

	i = 0;
	if (s != 0)
		while (s[i] != '\0')
			i++;
	write(1, s, i);
	return (i);
}
