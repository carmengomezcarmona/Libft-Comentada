/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmgome <carmgome@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 16:59:51 by carmgome          #+#    #+#             */
/*   Updated: 2025/12/11 23:48:14 by carmgome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// la funcion une dos strings en una nueva string
char	*ft_strjoin(char const *s1, char const *s2) // une dos strings en una nueva string
{
	size_t	len1; // longitud del primer string	
	size_t	len2; // longitud del segundo string
	char	*new; // puntero a la nueva string

	if (!s1 || !s2) // si alguno de los strings es NULL
		return (NULL); // devuelve NULL
	len1 = ft_strlen(s1); // obtiene la longitud del primer string
	len2 = ft_strlen(s2); // obtiene la longitud del segundo string
	new = malloc(len1 + len2 + 1); // reserva memoria para la nueva string
	if (!new) // si no se ha podido reservar memoria
		return (NULL); // devuelve NULL
	ft_memmove(new, s1, len1); // copia el primer string a la nueva string
	ft_memmove(&new[len1], s2, len2); // copia el segundo string a la nueva string
	new[len1 + len2] = '\0'; // añade el caracter nulo al final de la nueva string
	return (new); // devuelve la nueva string
}

/*int main (void)
{
	char * resultado;
	char *s1;
	char *s2;
	s1 = "Manolo";
	s2= "Pepe";
	resultado = ft_strjoin (s1, s2);
	printf("%s\n", resultado);
}*/
