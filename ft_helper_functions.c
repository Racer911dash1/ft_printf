/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_helper_functions.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbakker <dbakker@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 16:29:45 by dbakker           #+#    #+#             */
/*   Updated: 2025/05/08 16:35:08 by dbakker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

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
