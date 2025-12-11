/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmgome <carmgome@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 11:57:37 by carmgome          #+#    #+#             */
/*   Updated: 2025/12/11 23:24:49 by carmgome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*la función devuelve un puntero a un nodo (t_list *). 
El parámetro void *content es genérico, porque no sabemos aún qué tipo de dato tendrá*/
t_list	*ft_lstnew_bonus(void *content)
{
	t_list	*new_node;//declaraMOS un puntero que apuntará al nuevo nodo que vamos a crear.

	new_node = malloc (sizeof(t_list));//reservamos memoria en malloc para el nuevo nodo
	if (!new_node)//si el nuevo nodo no existe, devuelve nulo
		return (NULL);
	new_node -> content = content;//añadimos el contenido al nuevo nodo
	new_node -> next = NULL;//añadimos el next del nuevo nodo (NULL porque es el último)
	return (new_node);//devolvemos el puntero al nuevo nodo
}
/*Estructura = plantilla (como tu clase en CSS).
Nodo = instancia concreta de esa plantilla, con su contenido real.
nodo se componer de contenido y next:
Contenido = lo que guarda ese nodo.
Next = puntero al siguiente nodo, o NULL si es el último.*/

/*typedef struct s_list
{
void *content;
struct s_list *next;
} t_list;*/

/*********************************************************************************************** */
//[nodo1] -> [nodo2] -> [nodo3] -> NULL (ESTO ES UNA LISTA)

/*#include <stdio.h>
int main(void)
{
    t_list *nodo;
    nodo = ft_lstnew("Hola");
    printf("nodo:%p\n", nodo);
    printf("este es el contenido del nodo: %s", (char *)nodo->content);
}*/