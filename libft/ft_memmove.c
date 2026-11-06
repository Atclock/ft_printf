/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabuzano <yabuzano@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/09 14:16:34 by yabuzano          #+#    #+#             */
/*   Updated: 2026/10/19 19:20:26 by yabuzano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned const char	*csrc;
	unsigned char		*cdest;

	csrc = (unsigned const char *)src;
	cdest = (unsigned char *)dest;
	if (cdest <= csrc)
		while (n--)
			*cdest++ = *csrc++;
	else if (cdest > csrc)
	{
		cdest += n - 1;
		csrc += n - 1;
		while (n--)
			*cdest-- = *csrc--;
	}
	return (dest);
}
/*
int	main()
{
	char	*src = "\0";
	char	dest[10] = "Hellothere";
	memmove(dest, src, 10);
//	ft_memmove(dest, src, 10);
	printf("%s", dest);
}*/
