/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbakker <dbakker@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 10:25:49 by dbakker           #+#    #+#             */
/*   Updated: 2025/05/08 15:27:12 by dbakker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static int	ft_is_int_min(int i)
{
	if (i == INT_MIN)
	{
		write(1, "-2147483648", 11);
		return (1);
	}
	return (0);
}

static int	ft_is_zero(int i)
{
	if (i == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	return (0);
}

static int	ft_less_than_zero(int i)
{
	if (i < 0)
	{
		write(1, "-", 1);
		return (1);
	}
	return (0);
}

void	ft_putnbr(va_list args)
{
	int	array[11];
	int	index;
	int	i;

	index = 0;
	i = (int)va_arg(args, int);
	if (ft_is_int_min(i))
		return ;
	if (ft_is_zero(i))
		return ;
	if (ft_less_than_zero(i))
		i = -i;
	while (i != 0)
	{
		array[index++] = i % 10 + '0';
		i /= 10;
	}
	while (index--)
		write(1, &array[index], 1);
}
