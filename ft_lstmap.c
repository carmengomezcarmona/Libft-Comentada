/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmgome <carmgome@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 12:08:43 by carmgome          #+#    #+#             */
/*   Updated: 2025/12/10 16:16:31 by carmgome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *))
{
    t_list *new_list = NULL;
    t_list *new_nodo;
    t_list *last_nodo = NULL;
    while (lst != NULL)
    {
        new_nodo = ft_lstnew(f(lst->content));
        if (new_nodo == NULL)
        {
            ft_lstclear(&new_list, del);
            return (NULL);
        }
        if (new_list == NULL)
        {
            new_list = new_nodo;
            last_nodo = new_nodo;
        }
        else
        {
            last_nodo->next = new_nodo;
            last_nodo = new_nodo;
        }
        lst = lst->next;
    }
    return (new_list);
}