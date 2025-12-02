/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmgome <carmgome@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 18:44:29 by carmgome          #+#    #+#             */
/*   Updated: 2025/12/02 10:41:36 by carmgome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_words(const char *s, char c)
{
	size_t i = 0;
	size_t words = 0;

	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
			words++;
		while (s[i] && s[i] != c)
			i++;
	}
	return words;
}

static char	*ft_get_word(const char *s, char c, size_t *i)
{
	size_t start = *i;
	size_t len = 0;

	while (s[*i] && s[*i] != c)
	{
		(*i)++;
		len++;
	}

	char *word = malloc(sizeof(char) * (len + 1));
	if (!word)
		return NULL;

	size_t j = 0;
	while (j < len)
	{
		word[j] = s[start + j];
		j++;
	}
	word[len] = '\0';
	return word;
}

char	**ft_split(char const *s, char c)
{
	if (!s)
		return NULL;

	size_t words = ft_count_words(s, c);
	char **array = malloc(sizeof(char *) * (words + 1));
	if (!array)
		return NULL;

	size_t i = 0;
	size_t word_index = 0;

	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{
			char *word = ft_get_word(s, c, &i);
			if (!word)
			{
				while (word_index > 0)
				{
					free(array[word_index - 1]);
					word_index--;
				}
				free(array);
				return NULL;
			}
			array[word_index] = word;
			word_index++;
		}
	}
	array[word_index] = NULL;
	return array;
}

/*
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int main(void)
{
    char **result;
    int i;

    char *str = "hola--mundo--42--malaga";
    char delim = '-';

    result = ft_split(str, delim);
    if (!result)
    {
        printf("Error: ft_split devolvió NULL\n");
        return 1;
    }

    i = 0;
    while (result[i])
    {
        printf("Palabra %d: %s\n", i, result[i]);
        free(result[i]);
        i++;
    }
    free(result);
    return 0;
}*/