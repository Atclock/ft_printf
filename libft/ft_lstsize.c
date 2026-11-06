/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabuzano <yabuzano@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/10 16:56:42 by yabuzano          #+#    #+#             */
/*   Updated: 2026/10/15 21:13:11 by yabuzano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	t_list			*tmp;
	unsigned int	counter;

	if (!lst)
		return (0);
	tmp = lst;
	counter = 0;
	while (tmp)
	{
		counter++;
		tmp = tmp->next;
	}
	return (counter);
}
