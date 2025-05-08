/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbakker <dbakker@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 16:57:51 by dbakker           #+#    #+#             */
/*   Updated: 2025/05/08 15:27:14 by dbakker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static void	ft_conversions(char specifier, va_list args)
{
	if (specifier == 'c')
		ft_putchar(args);
	else if (specifier == 's')
		ft_putstr(args);
	else if (specifier == 'i' || specifier == 'd')
		ft_putnbr(args);
	else if (specifier == 'u')
		ft_putunbr(args);
	else if (specifier == 'x' || specifier == 'X' || specifier == 'p')
		ft_putbase(args, specifier);
	else if (specifier == '%')
		write(1, "%", 1);
}

/*
- Print format
*/
int	ft_printf(const char *format, ...)
{
	va_list	args;

	va_start(args, format);
	while (*format)
	{
		if (*format == '%' && *(format + 1))
			ft_conversions(*(++format), args);
		else
			write(1, format, 1);
		format++;
	}
	va_end(args);
	return (0);
}

#include <stdio.h>

int	main(void)
{
	// ft_printf("\n%s\n%c\n%i\n%u\n%x\n", "Hello World", 'D', INT_MIN, UINT_MAX, -74823784);
	// printf("\n%s\n%c\n%i\n%u\n%x\n", "Hello World", 'D', INT_MIN, UINT_MAX, -74823784);
}
