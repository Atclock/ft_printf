/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabuzano <yabuzano@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/09 14:35:54 by yabuzano          #+#    #+#             */
/*   Updated: 2026/10/15 17:14:47 by yabuzano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	length;

	length = ft_strlen(src);
	i = 0;
	if (length + 1 < size)
		ft_memcpy(dest, src, length + 1);
	else if (size != 0)
	{
		while (i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (length);
}
/*
int	main()
{
	char	*src = "Torschlusspanik";
	char	dest[] = "";
	int		rv;
	
	//rv = strlcpy(dest, src, 15);
	rv = ft_strlcpy(dest, src, 15);
	printf("%s %d", dest, rv);
}*/
