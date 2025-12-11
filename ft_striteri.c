/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmgome <carmgome@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 16:27:37 by carmgome          #+#    #+#             */
/*   Updated: 2025/12/11 23:46:50 by carmgome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// la función ft_striteri aplica la función f a cada carácter de la cadena s,
// pasando el índice del carácter como primer argumento y un puntero al carácter
// como segundo argumento.
// Si s o f son NULL, la función no hace nada.
void	ft_striteri(char *s, void (*f)(unsigned int, char*)) //Aplica la función f a cada carácter de la cadena s
{
	unsigned int	i; //Índice para recorrer la cadena

	if (!s || !f) //Verifica si s o f son NULL
		return ; //Si alguno es NULL, no hace nada
	i = 0; 
	while (s[i]) //Recorre la cadena hasta el carácter nulo
	{
		f(i, &s[i]); //Aplica la función f al carácter actual
		i++; //Incrementa el índice
	}
}

/*
#include <stdio.h>
#include "libft.h"

void ft_to_uppercase(unsigned int i, char *c)
{
    (void)i;
    if (*c >= 'a' && *c <= 'z')
        *c = *c - 32;
}

int main(void)
{
    char str1[] = "hola mundo";
    char str2[] = "42malaga";

    printf("Antes: %s\n", str1);
    ft_striteri(str1, ft_to_uppercase);
    printf("Después: %s\n\n", str1);

    printf("Antes: %s\n", str2);
    ft_striteri(str2, ft_to_uppercase);
    printf("Después: %s\n\n", str2);

    return 0;
}
*/
