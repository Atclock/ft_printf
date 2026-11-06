/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putint.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabuzano <yabuzano@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 10:40:34 by yabuzano          #+#    #+#             */
/*   Updated: 2026/11/03 10:50:54 by yabuzano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_putint(int n)
{
	long				nb;
	unsigned long		count;

	nb = n;
	count = 0;
	if (nb < 0)
	{
		ft_putchar_fd('-', 1);
		count++;
		nb = -nb;
	}
	count += ft_putnbr_base((unsigned long) nb, "0123456789");
	return (count);
}
