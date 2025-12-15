/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmgome <carmgome@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 10:46:40 by carmgome          #+#    #+#             */
/*   Updated: 2025/12/11 23:13:36 by carmgome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* esta funcion borra toda la lista y libera la memoria de cada nodo. Recibe:
lst : puntero al puntero al primer nodo
del: funcion para liberar el contendido de cada nodo*/
void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*cajatemporal; /* Tu variable auxiliar; sirve para guardar la dirección 
    del siguiente nodo antes de borrar el actual.Esto es importante porque una vez 
    borras un nodo, ya no puedes acceder a su next */
	if (!lst || !del)// si no hay lista o no hay funcion del no hacemos nada
		return ;
	while (*lst)//Mientras haya nodos en la lista, seguimos borrando
	{
		cajatemporal = (*lst)->next;
		del((*lst)->content);//Borramos el nodo actual, usando la función ft_lstdelone
		free(*lst); //Avanzamos al siguiente nodo que guardamos en cajatemporal//
		*lst = cajatemporal; //Ahora el puntero *lst apunta al próximo nodo a borrar
	}
	*lst = NULL; // Como hemos borrado todo, nos aseguramos de que el puntero original quede limpio.
}
