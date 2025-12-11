/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmgome <carmgome@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 10:46:40 by carmgome          #+#    #+#             */
/*   Updated: 2025/12/11 14:14:52 by carmgome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear_bonus(t_list **lst, void (*del)(void*))
{
	t_list	*cajatemporal;

	cajatemporal = (*lst)->next;
	if (!lst || !del)
		return ;
	while (*lst != NULL)
	{
		ft_lstdelone(*lst, del);
		*lst = cajatemporal;
	}
	*lst = NULL;
}
