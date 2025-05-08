/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbakker <dbakker@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 15:33:28 by dbakker           #+#    #+#             */
/*   Updated: 2025/05/08 17:31:02 by dbakker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_putstr(va_list args)
{
	char	*s;
	size_t	string_length;

	string_length = 0;
	s = (char *)va_arg(args, char *);
	while (s[string_length])
		string_length++;
	write(1, s, string_length);
	return (string_length);
}
