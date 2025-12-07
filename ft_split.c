/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmgome <carmgome@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 18:44:29 by carmgome          #+#    #+#             */
/*   Updated: 2025/12/07 14:04:50 by carmgome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_words(const char *s, char c)
{
	size_t	i;
	size_t	words;

	i = 0;
	words = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
			words++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (words);
}

static char	*ft_get_word(const char *s, char c, size_t *i)
{
	size_t	start;
	size_t	len;

	start = *i;
	len = 0;
	while (s[*i] && s[*i] != c)
	{
		(*i)++;
		len++;
	}
	return (ft_substr(s, start, len));
}

static char	**ft_free(char **tab, size_t i)
{
	while (i > 0)
	{
		i--;
		free(tab[i]);
	}
	free(tab);
	return (NULL);
}

char	**ft_split(const char *s, char c)
{
	char	**tab;
	size_t	i;
	size_t	j;
	size_t	words;

	if (!s)
		return (NULL);
	words = ft_count_words(s, c);
	tab = (char **)malloc((words + 1) * sizeof(char *));
	if (!tab)
		return (NULL);
	i = 0;
	j = 0;
	while (j < words)
	{
		while (s[i] && s[i] == c)
			i++;
		tab[j] = ft_get_word(s, c, &i);
		if (!tab[j])
			return (ft_free(tab, j));
		j++;
	}
	tab[j] = NULL;
	return (tab);
}

/*#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	const char *string;
	string = "...Hola..mundo..esto..es...un.test...";
	char delimitador;
	delimitador = '.';
	char **resultado;
	resultado = ft_split(string, delimitador);
	printf("Resultado de ft_split:\n");
	int i = 0;
    while (resultado[i] != NULL)
    {
        printf("Libro %d: [%s]\n", i, resultado[i]);
        i++;
    }
		i = 0;
    while (resultado[i] != NULL)
    {
        free(resultado[i]);
        i++;
    }
    free(resultado);

    return (0);
}*/
