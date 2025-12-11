/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmgome <carmgome@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 17:27:48 by carmgome          #+#    #+#             */
/*   Updated: 2025/12/11 23:06:21 by carmgome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// reserva memoria para un array de nmemb (cuántos elementos quieres) elementos, cada uno de tamaño size (lo q ocupa), y además la deja a 0
void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total; // total de memoria a reservar
	void	*memory; // puntero a la memoria reservada

	total = nmemb * size; // calcular el total de memoria a reservar cantidad de elementos * tamaño de cada elemento
	memory = malloc(total); // reservar la memoria 
	if (!memory) // comprobar si la reserva fue exitosa
		return (NULL); // si no se pudo reservar memoria, devolver NULL
	ft_bzero(memory, total); // inicializar la memoria a 0 usando ft_bzero
	return (memory); // devolver el puntero a la memoria reservada e inicializada
}
/* Fabrica calloc: crear cajitas nuevas, y te devuelve la direccion de donde esta la caja
y ademas las limpia, igual q malloc pero dejando las cajitas a ceros*/

/*
int main()
{
	int elementos;
	int tamaño;
	elementos = 5; //quiero 5 elementos 
	tamaño = sizeof(int); //cada elemento es un int
	int *array; 
	array = ft_calloc(elementos, tamaño); //reservo memoria para 5 enteros
	printf("Dirección devuelta por calloc: %p\n", array);
	free(array); //libero la memoria
	return (0);
}
*/