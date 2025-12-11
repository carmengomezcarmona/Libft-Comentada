/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmgome <carmgome@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 15:32:21 by carmgome          #+#    #+#             */
/*   Updated: 2025/12/12 00:05:14 by carmgome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//convierte una letra mayuscula en minuscula
int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
/*
#include <stdio.h>

int main(void)
{
    int c;

    // Ejemplo ft_tolower
    c = 'A';
    printf("ft_tolower('%c') = '%c'\n", c, ft_tolower(c));

    c = 'b';
    printf("ft_tolower('%c') = '%c'\n", c, ft_tolower(c));
	return (0);
}
*/