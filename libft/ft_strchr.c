/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabuzano <yabuzano@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/09 18:36:59 by yabuzano          #+#    #+#             */
/*   Updated: 2026/10/19 20:50:16 by yabuzano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned long	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == (char)c)
		return ((char *) &s[i]);
	return (NULL);
}
/*
int main()
{
    const char    *s = NULL;
    //char    c = '0';

//    printf("%s\n", ft_strchr(s, 0));
	printf("%s", strchr(s, 0));
}*/
