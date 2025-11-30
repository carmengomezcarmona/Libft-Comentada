/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmgome <carmgome@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 16:53:27 by carmgome          #+#    #+#             */
/*   Updated: 2025/11/30 16:58:43 by carmgome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_substr(const char *s, unsigned int start, size_t len)
{
    size_t	i;
    size_t	slen;
    char	*copy;

    if (!s)
        return (NULL);

    slen = ft_strlen(s);
    
    if (start >= slen)
        return (ft_strdup(""));

    if (len > slen - start)
        len = slen - start;

    copy = malloc(len + 1);
    if (!copy)
        return (NULL);

    i = 0;
    while (i < len)
    {
        copy[i] = s[start + i];
        i++;
    }
    copy[i] = '\0';

    return (copy);
}