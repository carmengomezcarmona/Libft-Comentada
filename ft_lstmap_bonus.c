/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmgome <carmgome@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 12:08:43 by carmgome          #+#    #+#             */
/*   Updated: 2025/12/11 14:15:24 by carmgome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap_bonus(t_list *lst, void*(*f)(void *), void(*del)(void *))
{
	t_list	*new_list;
	t_list	*new_nodo;

	new_list = NULL;
	while (lst)
	{
		new_nodo = ft_lstnew(f(lst->content));
		if (!new_nodo)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		if (!new_list)
			new_list = new_nodo;
		else
			ft_lstadd_back(&new_list, new_nodo);
		lst = lst->next;
	}
	return (new_list);
}
