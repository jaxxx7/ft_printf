/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhachem <mhachem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 19:07:31 by mhachem           #+#    #+#             */
/*   Updated: 2025/05/09 16:53:48 by mhachem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h> 

int		ft_printf(const char *format, ...);
int		ft_putstr(char *str);
int		ft_putchar(char c);
int		ft_putnbr(int nb);
int		ft_putaddress(void *p);
int		ft_handle_type(const char letter, va_list args);
int		ft_puthexalower(unsigned int nb);
int		ft_puthexaupper(unsigned int nb);
int		ft_putunsigned_dec(unsigned int nb);

#endif