/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabuzano <yabuzano@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 10:18:47 by yabuzano          #+#    #+#             */
/*   Updated: 2026/11/04 10:22:29 by yabuzano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int		ft_formatv2(char type, va_list *args)
{
	if (type == 'u')
		return (ft_putnbr_base(va_arg(*args, unsigned int), "0123456789"));
	else if (type == 'x')
		return (ft_putnbr_base(va_arg(*args, unsigned int), "0123456789abcdef"));
	else if (type == 'X')
		return (ft_putnbr_base(va_arg(*args, unsigned int), "0123456789ABCDEF"));
	else if (type == 'p')
		return (ft_putptr(va_arg(*args, void *)));
	return (0);
}

int		ft_format(char type, va_list *args)
{
	char	*s;

	if (type == 'c')
	{
		ft_putchar_fd((char)va_arg(*args, int), 1);
		return (1);
	}
	else if (type == 's')
	{
		s = va_arg(*args, char *);
		if (!s)
			s = "(null)";
		ft_putstr_fd(s, 1);
		return (ft_strlen(s));
	}
	else if (type == '%')
	{
		ft_putchar_fd('%', 1);
		return (1);
	}
	else if (type == 'd' || type == 'i')
		return (ft_putint(va_arg(*args, int)));
	else if (type == 'u' || type == 'x' || type == 'X' || type == 'p')
		return (ft_formatv2(type, args));
	return (0);
}
