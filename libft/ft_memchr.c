/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabuzano <yabuzano@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 10:56:11 by yabuzano          #+#    #+#             */
/*   Updated: 2026/10/15 17:36:46 by yabuzano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*sc;

	sc = (unsigned char *)s;
	while (n && sc)
	{
		if (*sc == (unsigned char)c)
			return ((void *)sc);
		sc++;
		n--;
	}
	return (NULL);
}
/*
int main()
{
    const char    *s = "Die katze hat das kode geschreiben";
//    char    c = '\0';

    printf("%s", (char *)ft_memchr(s, 0, 3));
}*/
