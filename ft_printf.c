/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabuzano <yabuzano@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 10:09:47 by yabuzano          #+#    #+#             */
/*   Updated: 2026/11/06 15:51:34 by yabuzano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	unsigned long	count;
	unsigned long	i;
	va_list			args;

	i = 0;
	count = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			count += ft_format(format[i], &args);
		}
		else
		{
			ft_putchar_fd(format[i], 1);
			count++;
		}
		i++;
	}
	va_end(args);
	return (count);
}
/*
int	main()
{
	int	n  = 10;
	int	*p = &n;
	ft_printf("%x\n", 255);
	printf("%x\n", 255);

	ft_printf("%X\n", 255);
	printf("%X\n", 255);
	ft_printf("%u\n", 0);
	ft_printf("%x\n", 0);
	ft_printf("%X\n", 0);
	ft_printf("%p\n", p);
}*/
