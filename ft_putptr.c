/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabuzano <yabuzano@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 10:18:22 by yabuzano          #+#    #+#             */
/*   Updated: 2026/11/06 15:53:42 by yabuzano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(void *ptr)
{
	unsigned long	addr;
	unsigned long	count;

	addr = (unsigned long)ptr;
	count = 0;
	ft_putstr_fd("0x", 1);
	count += 2;
	count += ft_putnbr_base(addr, "0123456789abcdef");
	return (count);
}
