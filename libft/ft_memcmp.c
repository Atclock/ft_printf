/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabuzano <yabuzano@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 11:13:02 by yabuzano          #+#    #+#             */
/*   Updated: 2026/10/19 20:19:28 by yabuzano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	int				index;
	int				diff;

	index = 0;
	diff = 0;
	str1 = (unsigned char *) s1;
	str2 = (unsigned char *) s2;
	while (n)
	{
		if (str1[index] == str2[index])
		{
			index++;
			n--;
			continue ;
		}
		diff = str1[index] - str2[index];
		break ;
	}
	return (diff);
}
/*
int	main()
{
	const char	*s1 = NULL;
	const char	*s2 = NULL;

	printf("%d", ft_memcmp(s1, s2, 19));
}*/
