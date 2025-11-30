/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmgome <carmgome@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 16:59:51 by carmgome          #+#    #+#             */
/*   Updated: 2025/11/30 17:29:27 by carmgome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strjoin(char const *s1, char const *s2)
{
    size_t  len1;
    size_t  len2;
    size_t  i;
    size_t  j;
    char    *new;

    if (!s1 || !s2)
        return (NULL);
    
    len1 = ft_strlen(s1);
    len2 = ft_strlen(s2);

    new = malloc(len1 + len2 + 1);

    if (!new)
        return (NULL);

    i = 0;
    while (i < len1)
    {
        new[i] = s1[i];
        i++;
    }
    j = 0;
    while (j < len2)
    {
        new[i + j] = s2[j];
        j++;
    }
    new[i + j] = '\0';
    return (new);
}