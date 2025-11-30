/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmgome <carmgome@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 17:35:25 by carmgome          #+#    #+#             */
/*   Updated: 2025/11/30 18:33:22 by carmgome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strtrim(char const *s1, char const *set)
{
    size_t	start;   // índice donde empieza la palabra real (no recortada)
    size_t	end;     // índice donde termina la palabra real
    size_t	len;     // longitud de la nueva palabra
    size_t	i;       // contador para copiar letra por letra
    char	*cut;    // puntero a la nueva caja donde guardaremos el recorte

    if (!s1 || !set)         // si no existe la palabra o el set
        return (NULL);

    start = 0;
    while (s1[start] && ft_strchr(set, s1[start])) // avanzamos hasta que el carácter no esté en set
        start++;

    end = ft_strlen(s1);
    while (end > start && ft_strchr(set, s1[end - 1])) // retrocedemos desde el final
        end--;

    len = end - start;        // cantidad de letras a copiar

    cut = malloc(len + 1);    // pedimos memoria para la nueva caja (+1 para '\0')
    if (!cut)
        return (NULL);

    i = 0;
    while (i < len)           // copiamos letra por letra
    {
        cut[i] = s1[start + i];
        i++;
    }
    cut[i] = '\0';            // cerramos la string

    return (cut);             // devolvemos la nueva cajita
}