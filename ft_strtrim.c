/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmgome <carmgome@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 17:35:25 by carmgome          #+#    #+#             */
/*   Updated: 2025/12/02 10:57:17 by carmgome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
    size_t	start;
    size_t	end;
    size_t	len;
    size_t	i;
    char	*cut;

    if (!s1 || !set)
        return (NULL);

    start = 0;
    while (s1[start] && ft_strchr(set, s1[start]))
        start++;

    end = ft_strlen(s1);
    while (end > start && ft_strchr(set, s1[end - 1]))
        end--;

    len = end - start;

    cut = malloc(len + 1);
    if (!cut)
        return (NULL);

    i = 0;
    while (i < len)
    {
        cut[i] = s1[start + i];
        i++;
    }
    cut[i] = '\0';

    return (cut);
}