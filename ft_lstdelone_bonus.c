/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmgome <carmgome@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 19:45:01 by carmgome          #+#    #+#             */
/*   Updated: 2025/12/11 23:14:18 by carmgome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* Esta función elimina un nodo y libera su memoria. Recibe:
lst → el nodo que queremos eliminar.
del → un puntero a la función que se encarga de liberar el contenido del nodo, 
porque puede ser cualquier tipo de dato.*/
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del) //Si no hay nodo o no hay función para borrar el contenido, no hacemos nada.
		return ;
	del(lst->content); //llamamos a la función del para liberar el contenido del nodo
	free(lst); //Finalmente, liberamos el nodo en sí.Después de esto, el nodo ya no existe en memoria
}
