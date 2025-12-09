/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmgome <carmgome@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 19:16:31 by carmgome          #+#    #+#             */
/*   Updated: 2025/12/09 19:28:58 by carmgome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
            // si no hay lista o no hay nuevo nodo, no hacemos nada
    if (!lst || !new)
        return;

    //la lista esta vacia, el nuevo nodo es el primero y el último
    if (*lst == NULL)
    {
        // Tú pasas a señalar al nuevo. El nuevo es ahora el primero (y único).
        *lst = new;
        return; // ¡Terminamos! No hay que hacer nada más.
    }

   // la lista ya tiene nodos, hay q añadir el nuevo al final, primero buscamos quien esta ultimo llamando ft_ltlast
    t_list *ultimo_nodo;
    ultimo_nodo= ft_lstlast(*lst);
    // ahora el ultimo nodo apunta al nuevo
    ultimo_nodo->next = new;
}