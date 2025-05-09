/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putadress.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhachem <mhachem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 20:34:35 by mhachem           #+#    #+#             */
/*   Updated: 2025/05/09 16:43:03 by mhachem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putadress(void *p)
{
	int	result;

	if (!p)
		return (ft_putstr("(nil)"));
	result = ft_putstr("0x");
	result += ft_puthexalower((unsigned long )p);
	return (result);
}
