/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmgome <carmgome@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 19:16:31 by carmgome          #+#    #+#             */
/*   Updated: 2025/12/11 14:13:37 by carmgome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back_bonus(t_list **lst, t_list *new)
{
	t_list	*ultimo_nodo;

	ultimo_nodo = ft_lstlast(*lst);
	if (!lst || !new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	ultimo_nodo->next = new;
}
