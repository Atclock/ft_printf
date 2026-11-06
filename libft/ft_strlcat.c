/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabuzano <yabuzano@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/09 18:30:32 by yabuzano          #+#    #+#             */
/*   Updated: 2026/10/19 20:56:32 by yabuzano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dstlen;
	size_t	srclen;

	i = 0;
	dstlen = 0;
	srclen = ft_strlen(src);
	while (dstlen < size && dst[dstlen] != '\0')
		dstlen++;
	if (dstlen == size)
		return (size + srclen);
	while (src[i] != '\0' && (i + dstlen) < size - 1)
	{
		dst[dstlen + i] = src[i];
		i++;
	}
	dst[dstlen + i] = '\0';
	return (dstlen + srclen);
}
/*
int	main()
{
	char	*src = "abc";
	char	*dst = NULL;
	int		x = ft_strlcat(dst, src, 0);
	printf("Value of x is %d and dest is filled up with %s",x, dst);
}*/
