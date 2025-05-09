/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putdecimal.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhachem <mhachem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 15:43:43 by mhachem           #+#    #+#             */
/*   Updated: 2025/05/07 16:40:37 by mhachem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putdecimal(int nb)
{
	int		length;
	char	c;

	length = 0;
	if (nb == -2147483648)
		return (write(1, "-2147483648", 11));
	if (nb < 0)
	{
		length += write(1, "-", 1);
		nb = -nb;
	}
	if (nb < 10)
	{
		c = nb + '0';
		length += write(1, &c, 1);
	}
	else
	{
		length += ft_putnbr(nb / 10);
		length += ft_putnbr(nb % 10);
	}
	return (length);
}
