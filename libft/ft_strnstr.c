/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabuzano <yabuzano@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 11:30:14 by yabuzano          #+#    #+#             */
/*   Updated: 2026/10/15 18:07:45 by yabuzano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char	*big, const char *little, size_t len)
{
	size_t	x;
	size_t	y;

	if (little[0] == '\0')
		return ((char *)big);
	y = 0;
	while (y < len && big[y])
	{
		x = 0;
		while (little[x] && big[x] && little[x] == big[y] && y < len)
		{
			x++;
			y++;
		}
		if (little[x] == '\0')
			return ((char *) &big[y - x]);
		y++;
		y = y - x;
	}
	return (NULL);
}
/*
int	main()
{
	char	*s1 = NULL;
//	char	*s2 = "";

	printf("%s", ft_strnstr(s1, NULL, 8));
}*/
