/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhachem <mhachem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 20:29:20 by mhachem           #+#    #+#             */
/*   Updated: 2025/05/07 16:39:36 by mhachem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int nb)
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
