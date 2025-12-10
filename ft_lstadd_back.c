/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmgome <carmgome@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 19:16:31 by carmgome          #+#    #+#             */
/*   Updated: 2025/12/09 19:28:58 by carmgome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!lst || !new)
	       	return;
	if (*lst == NULL)
	{
		*lst = new;
		return;
	}
	t_list *ultimo_nodo;
	ultimo_nodo= ft_lstlast(*lst);
	ultimo_nodo->next = new;
}
