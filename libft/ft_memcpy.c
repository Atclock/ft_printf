/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabuzano <yabuzano@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/09 14:08:20 by yabuzano          #+#    #+#             */
/*   Updated: 2026/10/18 17:00:34 by yabuzano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned const char	*csrc;
	unsigned char		*cdest;

	cdest = (unsigned char *) dest;
	csrc = (unsigned const char *) src;
	while (n--)
	{
		*cdest = *csrc;
		cdest++;
		csrc++;
	}
	return (dest);
}
/*
int	main()
{
//	char	*src = "Die katze hat das Pizza gegessen";
//	char	dest[1] = {"\0"};
//	char	*s = "";
//	char	d[50];

	ft_memcpy(NULL, NULL, 6);
//	memcpy(s, d, 6);
//	printf("%s", dest);
//	printf(" %s", d);
}*/
