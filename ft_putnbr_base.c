/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabuzano <yabuzano@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 10:35:37 by yabuzano          #+#    #+#             */
/*   Updated: 2026/11/06 15:44:49 by yabuzano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base(unsigned long n, char *base)
{
	unsigned long	base_len;
	unsigned long	count;

	base_len = ft_strlen(base);
	count = 0;
	if (n >= base_len)
		count += ft_putnbr_base(n / base_len, base);
	ft_putchar_fd(base[n % base_len], 1);
	return (count + 1);
}
