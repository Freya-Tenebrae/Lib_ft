/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaginot <cmaginot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 02:15:56 by cmaginot          #+#    #+#             */
/*   Updated: 2021/04/20 23:01:47 by cmaginot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *newlst;

	(void)del;
	if (lst == 0 || f == 0 || del == 0)
		return (0);
	while (lst != 0)
	{
		ft_lstadd_back(&newlst, ft_lstnew(f(lst->content)));
		lst = lst->next;
	}
	return (newlst);
}
