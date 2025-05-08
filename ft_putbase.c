/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putbase.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbakker <dbakker@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 11:27:36 by dbakker           #+#    #+#             */
/*   Updated: 2025/05/08 16:12:39 by dbakker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static int	ft_is_zero(unsigned int x)
{
	if (x == 0)
	{
		write (1, "0", 1);
		return (1);
	}
	return (0);
}

static void	ft_int_to_hex(unsigned int x, char *base)
{
	char	array[8];
	int		index;

	index = 0;
	while (x != 0)
	{
		array[index++] = base[x % 16];
		x /= 16;
	}
	while (index--)
		write(1, &array[index], 1);
}

void	ft_putbase(va_list args, char specifier)
{
	unsigned int	x;

	x = (unsigned int)va_arg(args, unsigned int);
	if (ft_is_zero(x))
		return ;
	if (specifier == 'x')
		ft_int_to_hex(x, "0123456789abcdef");
	else if (specifier == 'X')
		ft_int_to_hex(x, "0123456789ABCDEF");
}
