/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printchar.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbakker <dbakker@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 10:05:49 by dbakker           #+#    #+#             */
/*   Updated: 2025/05/12 14:00:38 by dbakker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_putchar(va_list args)
{
	char	c;

	c = (char)va_arg(args, int);
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(va_list args)
{
	char	*s;
	size_t	string_length;

	string_length = 0;
	s = (char *)va_arg(args, char *);
	while (s[string_length])
		string_length++;
	write(1, s, string_length);
	return (string_length);
}
static int	ft_int_to_hex(unsigned int x, char *base)
{
	char	array[8];
	int		index;
	int		string_length;

	index = 0;
	while (x != 0)
	{
		array[index++] = base[x % 16];
		x /= 16;
	}
	string_length = index;
	while (index--)
		write(1, &array[index], 1);
	return (string_length);
}

int	ft_putbase(va_list args, char specifier)
{
	unsigned int	x;
	int				string_length;

	string_length = 0;
	x = (unsigned int)va_arg(args, unsigned int);
	if (ft_is_zero(x))
		return (1);
	if (specifier == 'x')
		string_length = ft_int_to_hex(x, "0123456789abcdef");
	else if (specifier == 'X')
		string_length = ft_int_to_hex(x, "0123456789ABCDEF");
	return (string_length);
}

int	ft_putptr(va_list args)
{
	char		buffer[16];
	char		*base;
	uintptr_t	p;
	size_t		index;
	int			string_length;

	index = 0;
	base = "0123456789abcdef";
	p = (uintptr_t)va_arg(args, uintptr_t);
	while (p)
	{
		buffer[index++] = base[p % 16];
		p /= 16;
	}
	string_length = (int)index;
	write(1, "0x", 2);
	while (index--)
		write(1, &buffer[index], 1);
	return (string_length);
}