/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_type.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhachem <mhachem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 19:31:37 by mhachem           #+#    #+#             */
/*   Updated: 2025/05/09 17:33:24 by mhachem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_handle_type(const char letter, va_list args)
{
	int	result;

	result = 0;
	if (letter == '%')
		result = ft_putchar('%');
	else if (letter == 's')
		result = ft_putstr(va_arg(args, char *));
	else if (letter == 'i' || letter == 'd')
		result = ft_putnbr(va_arg(args, int));
	else if (letter == 'c')
		result = ft_putchar(va_arg(args, int));
	else if (letter == 'p')
		result = ft_putaddress(va_arg(args, void *));
	else if (letter == 'u')
		result = ft_putunsigned_dec(va_arg(args, unsigned int));
	else if (letter == 'x')
		result = ft_puthexalower(va_arg(args, unsigned int));
	else if (letter == 'X')
		result = ft_puthexaupper(va_arg(args, unsigned int));
	else
		result = 0;
	return (result);
}
