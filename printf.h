/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbakker <dbakker@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 16:59:02 by dbakker           #+#    #+#             */
/*   Updated: 2025/05/08 17:31:20 by dbakker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H
//# include "../../milestone0/libft/libft.h"
# include <unistd.h> // write()
# include <stdarg.h> // va_
# include <limits.h> // INT_MAX && INT_MIN
# include <stdint.h> // uintptr_t

int	ft_is_zero(int nbr);
int	ft_less_than_zero(int nbr);
int	ft_is_int_min(int nbr);
int	ft_printf(const char *format, ...);
int	ft_putbase(va_list args, char specifier);
int	ft_putchar(va_list args);
int	ft_putnbr(va_list args);
int	ft_putptr(va_list args);
int	ft_putstr(va_list args);
int	ft_putunbr(va_list args);

#endif