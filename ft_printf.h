/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjouot <mjouot@marvin.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 17:44:22 by mjouot            #+#    #+#             */
/*   Updated: 2022/10/07 19:22:50 by mjouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <stddef.h>
# include <stdarg.h>

int		ft_printf(const char *str, ...);
int	ft_check_str(const char *str, va_list args);
int		ft_atoi(const char *nptr);
size_t	ft_strlen(const char *str);
void	ft_putchar(const char c);
int		ft_putstr(const char *s);
int		ft_putnbr(int n);
int		ft_putnbr_base(unsigned int nbr, const char *base);

#endif
