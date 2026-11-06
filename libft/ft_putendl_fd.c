/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabuzano <yabuzano@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/09 20:45:17 by yabuzano          #+#    #+#             */
/*   Updated: 2026/10/19 19:31:06 by yabuzano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (!s || fd < 0)
		return ;
	while (*s != '\0')
	{
		write(fd, s, 1);
		s++;
	}
	write(fd, "\n", 1);
}
/*
int		main()
{
	char	*s = NULL;
	ft_putendl_fd(s, 1);
}*/
