/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbakker <dbakker@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 10:25:49 by dbakker           #+#    #+#             */
/*   Updated: 2025/05/08 16:32:24 by dbakker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

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
