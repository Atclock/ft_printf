/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabuzano <yabuzano@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/09 13:55:20 by yabuzano          #+#    #+#             */
/*   Updated: 2026/10/16 11:40:02 by yabuzano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*ptr;

	ptr = (char *) s;
	while (n > 0)
	{
		*(ptr++) = 0;
		n--;
	}
}
/*
int	main()
{
//	char	str1[] = "Die leidenschaft bringt leiden";
//	char	str2[] = "Die leidenschaft bringt leiden";
	int	yassin[] = {0,1,2,3,4,5,6,7,8,9};
	int	i;

	i = 0;
//	printf("%s\n", str1);
	ft_bzero(yassin, 16);
//	bzero(yassin, 12);
	while (i != 10)
	{
	printf("%i", yassin[i]);
	i++;
	}
}*/
