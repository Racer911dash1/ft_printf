/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putbase.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbakker <dbakker@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 11:27:36 by dbakker           #+#    #+#             */
/*   Updated: 2025/05/12 14:18:43 by dbakker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
