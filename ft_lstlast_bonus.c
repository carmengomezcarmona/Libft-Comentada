/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmgome <carmgome@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 19:09:06 by carmgome          #+#    #+#             */
/*   Updated: 2025/12/11 23:21:09 by carmgome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* esta funcion devuelve un puntero al último nodo de la lista, recibe lst que es un puntero
al primer nodo*/
t_list	*ft_lstlast_bonus(t_list *lst) //la función recibe un puntero a la lista
{
	if (!lst) // si la lista está vacía, no hay ultimo nodo, devuelve nulo
		return (NULL);
	while (lst->next != NULL) //mientras el siguiente nodo exista y no sea nulo
		lst = lst->next;//avanza el puntero al siguiente nodo y repite hasta q lst->next == NULL
	return (lst); //devuelve el último nodo, q es el q tiene next == NULL
}
//lst = lst->next: “mi puntero camina un nodo más”