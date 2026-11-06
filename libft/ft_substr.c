/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabuzano <yabuzano@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 16:29:17 by yabuzano          #+#    #+#             */
/*   Updated: 2026/10/11 21:39:20 by yabuzano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	final;
	size_t	slen;
	char	*p1;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (start >= slen)
		return (ft_strdup(""));
	if (len > slen - start)
		final = slen - start;
	else
		final = len;
	p1 = malloc(sizeof(char) * final + 1);
	if (!p1)
		return (NULL);
	ft_strlcpy(p1, &s[start], final + 1);
	return (p1);
}
/*
int	main()
{
	char	*str = "wenn man wichtig wurden, haben man kein frei zeit";

	printf("%s", ft_substr(str, 0, ft_strlen(str)));
}
*/
