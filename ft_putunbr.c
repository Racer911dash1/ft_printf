/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbakker <dbakker@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 11:19:47 by dbakker           #+#    #+#             */
/*   Updated: 2025/05/08 15:27:13 by dbakker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static int	ft_is_zero(int u)
{
	if (u == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	return (0);
}

void	ft_putunbr(va_list args)
{
	int				array[11];
	int				index;
	unsigned int	u;

	index = 0;
	u = (unsigned int)va_arg(args, unsigned int);
	if (ft_is_zero(u))
		return ;
	while (u > 0)
	{
		array[index++] = u % 10 + '0';
		u /= 10;
	}
	while (index--)
		write(1, &array[index], 1);
}
