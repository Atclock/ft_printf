/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabuzano <yabuzano@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/09 18:45:20 by yabuzano          #+#    #+#             */
/*   Updated: 2026/10/15 18:05:00 by yabuzano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last;

	last = NULL;
	while (s)
	{
		if (*s == (char)c)
			last = (char *)s;
		if (*s == '\0')
			break ;
		s++;
	}
	return (last);
}
/*
int main()
{
	const char    *s = "Let it Happen";
	char    c = 'c';
//	printf("%s\n", strrchr(s, c));
	printf("%s", ft_strrchr(s, c));
}*/
