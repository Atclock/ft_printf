/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabuzano <yabuzano@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/09 13:48:46 by yabuzano          #+#    #+#             */
/*   Updated: 2026/10/14 21:06:50 by yabuzano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*pointer;

	pointer = (unsigned char *) s;
	while (n > 0)
	{
		*pointer = (unsigned char) c;
		pointer++;
		n--;
	}
	return (s);
}
/*
int	main()
{
	char	str1[10];
//	char	str2[] = "Die katze hat das Pizza gegessen";

//	memset(str1, 'A', 6);
	ft_memset(str1, 'B', 6);

	printf("str1 = %s\n", str1);
//	printf("str2 = %s\n", str2);
}*/
