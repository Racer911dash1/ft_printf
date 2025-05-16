/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_helper_functions.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbakker <dbakker@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 16:29:45 by dbakker           #+#    #+#             */
/*   Updated: 2025/05/16 13:01:37 by dbakker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_length_of_num(int n)
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

int	ft_is_zero(int nbr)
{
	if (nbr == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	return (0);
}

int	ft_less_than_zero(int nbr)
{
	if (nbr < 0)
	{
		write(1, "-", 1);
		return (1);
	}
	return (0);
}

int	ft_is_int_min(int nbr)
{
	if (nbr == INT_MIN)
	{
		write(1, "-2147483648", 11);
		return (1);
	}
	return (0);
}
