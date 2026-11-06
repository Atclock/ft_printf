/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabuzano <yabuzano@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 09:42:12 by yabuzano          #+#    #+#             */
/*   Updated: 2026/11/04 10:23:28 by yabuzano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>
#include "libft/libft.h"

int 	ft_printf(const char *format, ...);
int		ft_format(char type, va_list *args);
int		ft_putnbr_base(unsigned long n, char *base);
int		ft_putint(int n);
int		ft_putptr(void *ptr);

#endif
