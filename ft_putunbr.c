/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbakker <dbakker@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 11:19:47 by dbakker           #+#    #+#             */
/*   Updated: 2025/05/16 13:02:09 by dbakker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunbr(va_list args)
{
	int				array[11];
	int				index;
	int				string_length;
	unsigned int	u;

	index = 0;
	u = (unsigned int)va_arg(args, unsigned int);
	string_length = ft_length_of_num(u);
	if (ft_is_zero(u))
		return (string_length);
	while (u > 0)
	{
		array[index++] = u % 10 + '0';
		u /= 10;
	}
	while (index--)
		write(1, &array[index], 1);
	return (string_length);
}
