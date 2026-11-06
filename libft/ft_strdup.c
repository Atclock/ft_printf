/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabuzano <yabuzano@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 15:00:25 by yabuzano          #+#    #+#             */
/*   Updated: 2026/10/16 14:22:16 by yabuzano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char		*ss;
	size_t		len;
	size_t		index;

	index = 0;
	len = ft_strlen(s);
	ss = (char *) malloc(len + 1);
	if (ss == NULL)
		return (NULL);
	while (s[index] != '\0' )
	{
		ss[index] = s[index];
		index++;
	}
	ss[index] = '\0';
	return (ss);
}
/*
int	main()
{
	char	*s = NULL;
	char	*sdup;
	sdup = strdup(s);
	printf("%s \n", s);
	printf("%s", sdup);
}*/
