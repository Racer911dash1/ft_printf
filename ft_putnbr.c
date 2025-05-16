/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbakker <dbakker@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 10:25:49 by dbakker           #+#    #+#             */
/*   Updated: 2025/05/16 13:02:26 by dbakker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(va_list args)
{
	int	array[11];
	int	index;
	int	int_length;
	int	i;

	index = 0;
	i = (int)va_arg(args, int);
	int_length = ft_length_of_num(i);
	if (ft_is_int_min(i) || ft_is_zero(i))
		return (int_length);
	if (ft_less_than_zero(i))
		i = -i;
	while (i != 0)
	{
		array[index++] = i % 10 + '0';
		i /= 10;
	}
	while (index--)
		write(1, &array[index], 1);
	return (int_length);
}
