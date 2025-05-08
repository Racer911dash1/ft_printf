/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putbase.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbakker <dbakker@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 11:27:36 by dbakker           #+#    #+#             */
/*   Updated: 2025/05/08 15:27:21 by dbakker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

// static int	ft_is_int_min(int x)
// {
// 	if (x == INT_MIN)
// 	{
// 		write(1, "80000000", 8);
// 		return (1);
// 	}
// 	return (0);
// }

static int	ft_is_zero(unsigned int x)
{
	if (x == 0)
	{
		write (1, "0", 1);
		return (1);
	}
	return (0);
}

static void	ft_int_to_hex(unsigned int x, char specifier)
{
	char	array[8];
	int		index;
	int		temp;

	index = 0;
	if (specifier == 'p')
		write(1, "0x", 2);
	while (x != 0)
	{
		temp = x % 16;
		if (temp < 10)
			temp += '0';
		else if (specifier == 'x')
			temp += 'W';
		else if (specifier == 'X')
			temp += '7';
		array[index++] = temp;
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
	if (specifier == 'x' || specifier == 'p')
		ft_int_to_hex(x, specifier);
	else if (specifier == 'X')
		ft_int_to_hex(x, specifier);
}
