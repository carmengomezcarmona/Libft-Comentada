/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmgome <carmgome@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 16:31:09 by carmgome          #+#    #+#             */
/*   Updated: 2025/12/11 23:25:49 by carmgome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*cuenta los nodos de una lista; nos va a devolver 
un entero: el numero de nodos que hay en la lista, 
recibe un puntero a la lista*/
int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst != NULL) //mientras la lista no se termine (no se encuentre un nodo nulo)
	{
		i++; //el contador aumenta contando los nodos
		lst = lst->next; //el puntero a la lista avanza al siguiente nodo
	}
	return (i); //nos devuelve el numero de nodos que ha encontrado
}
//lst = lst->next: “mi puntero camina un nodo más”.
