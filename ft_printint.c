/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbakker <dbakker@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 10:25:49 by dbakker           #+#    #+#             */
/*   Updated: 2025/05/12 14:01:37 by dbakker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_putnbr(va_list args)
{
	int	array[11];
	int	index;
	int	string_length;
	int	i;

	index = 0;
	i = (int)va_arg(args, int);
	if (ft_is_int_min(i))
		return (11);
	if (ft_is_zero(i))
		return (1);
	if (ft_less_than_zero(i))
		i = -i;
	while (i != 0)
	{
		array[index++] = i % 10 + '0';
		i /= 10;
	}
	string_length = index;
	while (index--)
		write(1, &array[index], 1);
	return (string_length);
}

int	ft_putunbr(va_list args)
{
	int				array[11];
	int				index;
	int				string_length;
	unsigned int	u;

	index = 0;
	u = (unsigned int)va_arg(args, unsigned int);
	if (ft_is_zero(u))
		return (1);
	while (u > 0)
	{
		array[index++] = u % 10 + '0';
		u /= 10;
	}
	string_length = index;
	while (index--)
		write(1, &array[index], 1);
	return (string_length);
}
