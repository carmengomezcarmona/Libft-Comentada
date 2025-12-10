/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmgome <carmgome@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 10:46:40 by carmgome          #+#    #+#             */
/*   Updated: 2025/12/10 11:46:37 by carmgome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*cajatemporal;
	if (!lst || !del)
		return;
	while (*lst != NULL)
	{
		cajitatemporal = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = cajitatemporal;
	}
	*lst = NULL;
}
