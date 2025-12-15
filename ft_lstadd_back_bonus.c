/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmgome <carmgome@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 19:16:31 by carmgome          #+#    #+#             */
/*   Updated: 2025/12/11 23:10:41 by carmgome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* esta funcion añade el nuevo nodo al final de la lista 'lst', recibe **lst un puntero 
al inicio de la lista, xq puede q este vacía y tengamos q modificar ese puntero, y
t_list *new → el nodo que queremos añadir al final */
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*ultimo_nodo; // creamos un puntero para recorrer la lista y encontrar el ultimo nodo

	ultimo_nodo = ft_lstlast(*lst); // usamos la funcion ft_lstlast para encontrar el ultimo nodo de la lista
	if (!lst || !new) // si no hay lista o no hay nuevo nodo, no hacemos nada
		return ;
	if (*lst == NULL) /*si mi puntero q señala a la lista ve q la lista esta vacia,
    el nuevo nodo es el primero y tb el último xq es el unico */
	{
		*lst = new; // entonces la lista ahora apunta al nuevo nodo xq es el unico
		return ; // y terminamos no hay que hacer nada más xq no hay mas nodos
	}
	ultimo_nodo->next = new; // ahora el ultimo nodo apunta al nuevo nodo
}
/* La función no recorre la lista manualmente con un while, porque usamos ft_lstlast.
Comprueba si hay lista y nodo nuevo
Si la lista está vacía, el nuevo nodo es el primero
Si no, conecta el nuevo nodo al último */
