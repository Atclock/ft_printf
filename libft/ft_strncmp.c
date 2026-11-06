/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabuzano <yabuzano@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 19:40:36 by yabuzano          #+#    #+#             */
/*   Updated: 2026/10/19 20:57:13 by yabuzano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	index;
	int		diff;

	index = 0;
	diff = 0;
	while ((s1[index] != '\0' || s2[index] != '\0') && n)
	{
		if ((unsigned char) s1[index] == (unsigned char) s2[index])
		{
			index++;
			n--;
			continue ;
		}
		diff = (unsigned char) s1[index] - (unsigned char) s2[index];
		break ;
	}
	return (diff);
}
/*
int	main()
{
	const char	*s1 = "Die katze hat das Pizza gegessen";
	const char	*s2 = "Die katze hat das Bier getronken";

	printf("%d", ft_strncmp(s1, s2, 19));
}*/
