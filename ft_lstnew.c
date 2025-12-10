/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmgome <carmgome@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 11:57:37 by carmgome          #+#    #+#             */
/*   Updated: 2025/12/10 13:04:48 by carmgome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
typedef struct s_list
{
void *content;
struct s_list *next;
} t_list;

t_list *ft_lstnew(void *content)
{
    t_list *new_node;

    new_node = malloc (sizeof(t_list));
    if (!new_node)
        return (NULL);
    new_node -> content = content;
    new_node -> next = NULL;
    return (new_node);
}
/* #include <stdio.h>
int main(void)
{
    t_list *nodo;
    nodo = ft_lstnew("Hola");
    printf("nodo:%p\n", nodo);
    printf("este es el contenido del nodo: %s", (char *)nodo->content);
}*/
