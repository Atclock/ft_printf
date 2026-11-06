/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabuzano <yabuzano@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 19:31:15 by yabuzano          #+#    #+#             */
/*   Updated: 2026/10/10 17:36:53 by yabuzano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}
/*
int main()
{
	int	*content;
	int	actualcontent = 5;
	t_list	*list;

	content = &actualcontent;
	list = ft_lstnew((int *)content);
	while (ft_lstiter(list))
	{
		printf("%d ", list->content);
	}
	free()
}*/
