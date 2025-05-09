/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhachem <mhachem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 16:11:12 by mhachem           #+#    #+#             */
/*   Updated: 2025/05/07 13:31:07 by mhachem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		length;
	int		result;

	length = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			result = ft_handle_type(*format, args);
			length += result;
		}
		else
		{
			write(1, format, 1);
			length++;
		}
		format++;
	}
	va_end(args);
	return (length);
}
