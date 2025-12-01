/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmgome <carmgome@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 10:50:00 by carmgome          #+#    #+#             */
/*   Updated: 2025/12/01 14:38:35 by carmgome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *big, const char *little, size_t n)
{
    size_t i;
    size_t j;

    if (*little == '\0')
        return ((char *)big);
    
    i = 0;
    while (i < n && big[i] != '\0')
    {
        if (big[i] == litlle[0])
            {
                j = 0;
                while (i + j < n && big[i+j] == little[j] && little[j] != '\0')
                j++;
                if (litlle[j] == '\0')
                    return ((char *)(big +i));
            }
            i++;
    }
    return (NULL);
}