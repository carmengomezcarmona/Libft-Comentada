/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmgome <carmgome@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 13:14:44 by carmgome          #+#    #+#             */
/*   Updated: 2025/12/11 23:11:33 by carmgome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//añade el 'nuevo nodo' al principio de la lista 'lst'
/*t_list **lst → un puntero al puntero del primer nodo de la lista
 (esto es importante, porque vamos a modificar el inicio de la lista).
t_list *new → el nodo que queremos añadir al principio de la lista.*/
void	ft_lstadd_front_bonus(t_list **lst, t_list *new)
{
	if (!new || !lst) // si falla el nuevo nodo, o la lista , no hacemos nada
		return ;
	new->next = *lst; //el next del nuevo nodo ahora apunta al principio de la lista
	*lst = new; //la lista ahora empieza por el nuevo nodo
}