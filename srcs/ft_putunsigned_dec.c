/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned_dec.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhachem <mhachem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 15:44:15 by mhachem           #+#    #+#             */
/*   Updated: 2025/05/09 16:38:50 by mhachem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunsigned_dec(unsigned int nb)
{
	int	length;

	length = 0;
	if (nb > 9)
	{
		length += ft_putunsigned_dec(nb / 10);
		nb %= 10;
	}
	length += ft_putchar(nb + '0');
	return (length);
}
