/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexaupper.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhachem <mhachem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 16:37:48 by mhachem           #+#    #+#             */
/*   Updated: 2025/05/09 16:29:38 by mhachem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexaupper(unsigned int nb)
{
	int		length;
	char	*base;

	base = "0123456789ABCDEF";
	length = 0;
	if (nb >= 16)
		length += ft_puthexaupper(nb / 16);
	length += ft_putchar(base[nb % 16]);
	return (length);
}
