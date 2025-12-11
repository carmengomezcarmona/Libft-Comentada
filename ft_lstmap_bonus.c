/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmgome <carmgome@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 12:08:43 by carmgome          #+#    #+#             */
/*   Updated: 2025/12/11 23:22:34 by carmgome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*ft_lstmap crea una lista nueva aplicando una función a cada nodo de otra lista, 
sin modificar la original. Si ocurre un error al crear algún nodo, borra la lista 
nueva y evita fugas de memoria.*/
t_list	*ft_lstmap_bonus(t_list *lst, void*(*f)(void *), void(*del)(void *))
{
	t_list	*new_list; // Puntero a la nueva lista
	t_list	*new_nodo; // Puntero al nuevo nodo creado

	new_list = NULL; // Inicializa la nueva lista como vacía
	while (lst) // Itera sobre cada nodo de la lista original
	{
		new_nodo = ft_lstnew(f(lst->content)); // Crea un nuevo nodo aplicando f al contenido del nodo actual
		if (!new_nodo) // Si la creación del nuevo nodo falla
		{
			ft_lstclear(&new_list, del); // Limpia la nueva lista para evitar fugas de memoria
			return (NULL); // Retorna NULL indicando fallo
		}
		if (!new_list) // Si la nueva lista está vacía, el nuevo nodo es el primer nodo
			new_list = new_nodo; // Asigna el nuevo nodo como la cabeza de la nueva lista
		else // Si la nueva lista ya tiene nodos, añade el nuevo nodo al final
			ft_lstadd_back(&new_list, new_nodo); // Añade el nuevo nodo al final de la nueva lista
		lst = lst->next; // Avanza al siguiente nodo de la lista original
	}
	return (new_list); // Retorna la nueva lista creada
}
