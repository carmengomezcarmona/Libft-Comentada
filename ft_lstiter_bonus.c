/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmgome <carmgome@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 11:50:23 by carmgome          #+#    #+#             */
/*   Updated: 2025/12/12 18:36:36 by carmgome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* Aplica la función 'f' al contenido de cada nodo de la lista 'lst'.
   Parámetros:
   - lst: Puntero al primer nodo de la lista.
   - f: Puntero a la función que se aplicará al contenido de cada nodo*/
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)//Si no hay lista o no hay función, no hacemos nada.
		return ;
	while (lst != NULL) // mientras haya nodos en la lista 
	{
		f(lst->content); //  Aplicamos la función al contenido
		lst = lst->next;// Avanzamos al siguiente nodo
	}
}
/*Esta función no crea, no borra y no modifica la lista, solo 
procesa el contenido de cada nodo.
Es como recorrer un tren y aplicar algo a cada vagón sin tocar los enganches.*/
