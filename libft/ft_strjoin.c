/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabuzano <yabuzano@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 16:24:50 by yabuzano          #+#    #+#             */
/*   Updated: 2026/10/15 18:41:32 by yabuzano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1size;
	size_t	s2size;
	char	*p;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	s1size = ft_strlen(s1);
	s2size = ft_strlen(s2);
	p = (char *) malloc(s1size + s2size + 1);
	if (!p)
		return (NULL);
	ft_strlcpy(p, s1, s1size + 1);
	ft_strlcpy((p + s1size), s2, s2size + 1);
	return (p);
}
/*
int	main()
{
	char const	*s1 = "Die leidenschaft";
	char const	*s2 = NULL;
	char	*result;
	
	result = ft_strjoin(s1, s2);
	printf("%s", result);
	free(result);
}*/
