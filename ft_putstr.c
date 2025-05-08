/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbakker <dbakker@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 15:33:28 by dbakker           #+#    #+#             */
/*   Updated: 2025/05/08 15:35:34 by dbakker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_putstr(va_list args)
{
	char	*s;
	size_t	slen;

	s = (char *)va_arg(args, char *);
	while (s[slen])
		slen++;
	write(1, s, slen);
}