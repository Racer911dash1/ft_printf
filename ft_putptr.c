/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbakker <dbakker@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 15:47:26 by dbakker           #+#    #+#             */
/*   Updated: 2025/05/08 17:31:05 by dbakker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_putptr(va_list args)
{
	char		buffer[16];
	char		*base;
	uintptr_t	p;
	size_t		index;
	int			string_length;

	index = 0;
	base = "0123456789abcdef";
	p = (uintptr_t)va_arg(args, uintptr_t);
	while (p)
	{
		buffer[index++] = base[p % 16];
		p /= 16;
	}
	string_length = (int)index;
	write(1, "0x", 2);
	while (index--)
		write(1, &buffer[index], 1);
	return (string_length);
}
