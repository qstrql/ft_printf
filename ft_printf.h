/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjouot <mjouot@marvin.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 17:44:22 by mjouot            #+#    #+#             */
/*   Updated: 2022/10/08 19:12:38 by mjouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>

int	ft_printf(const char *str, ...);
int	ft_check_str(const char *str, va_list args);
int	ft_strlen(const char *str);
int	ft_putchar(const char c);
int	ft_putstr(const char *s);
int	ft_printnbr(int n, char c);
int ft_printnbr_base(unsigned long n, const char *base, char c);

#endif
