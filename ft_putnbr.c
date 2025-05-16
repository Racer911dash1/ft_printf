/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbakker <dbakker@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 10:25:49 by dbakker           #+#    #+#             */
/*   Updated: 2025/05/16 14:46:48 by dbakker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_length_of_int(int n)
{
	size_t	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		len++;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

int	ft_putnbr(va_list args)
{
	int	array[11];
	int	index;
	int	int_length;
	int	i;

	index = 0;
	i = (int)va_arg(args, int);
	int_length = ft_length_of_int(i);
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
