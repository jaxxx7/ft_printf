/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexalower.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhachem <mhachem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 15:45:28 by mhachem           #+#    #+#             */
/*   Updated: 2025/05/09 17:27:14 by mhachem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexalower(unsigned long nb)
{
	int		length;
	char	*base;

	base = "0123456789abcdef";
	length = 0;
	if (nb >= 16)
		length += ft_puthexalower(nb / 16);
	length += ft_putchar(base[nb % 16]);
	return (length);
}
