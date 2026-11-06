/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabuzano <yabuzano@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/10 18:35:14 by yabuzano          #+#    #+#             */
/*   Updated: 2026/10/11 21:51:38 by yabuzano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*nlist;
	t_list	*nobj;
	void	*con;

	if (!lst || !f || !del)
		return (NULL);
	nlist = NULL;
	while (lst)
	{
		con = f(lst->content);
		nobj = ft_lstnew(con);
		if (!nobj)
		{
			del(con);
			ft_lstclear(&nlist, del);
			return (NULL);
		}
		ft_lstadd_back(&nlist, nobj);
		lst = lst->next;
	}
	return (nlist);
}
