/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabuzano <yabuzano@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 19:26:38 by yabuzano          #+#    #+#             */
/*   Updated: 2026/10/09 20:29:15 by yabuzano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	in(const char *str, char const c)
{
	while (*str && c != *str)
		str++;
	return (c == *str);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	first;
	size_t	last;
	char	*p;

	if (!s1 || !set)
		return (NULL);
	first = 0;
	last = ft_strlen(s1);
	while (in(set, s1[first]))
		first++;
	if (first == last)
	{
		p = ft_strdup("");
		return (p);
	}
	while (in(set, s1[last - 1]))
		last--;
	p = ft_substr(s1, first, last - first);
	return (p);
}
/*
int	main()
{
	char const	*s1 = "getrimmt! Die katze ist getrimmtiitm";
	char const	*set = "getrimmt";
	char	*trimmte = ft_strtrim(s1, set);

	printf("%s", trimmte);
}*/
