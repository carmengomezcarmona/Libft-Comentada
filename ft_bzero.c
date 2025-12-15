/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmgome <carmgome@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 15:33:03 by carmgome          #+#    #+#             */
/*   Updated: 2025/12/12 16:29:12 by carmgome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//igual que memset pero rellenamos con ceros
void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = 0;
		i++;
	}
}

#include <stdio.h>
int main()
{
    char frase[] = "Esto hay que rellenarlo con ceros";
    size_t cuantos;
    cuantos = 10;
    printf("Antes de bzero: %s\n", frase);
    ft_bzero(frase, cuantos);
    printf("Despues de ft_bzero: %s\n", frase);
    printf("Despues (saltando los 0s): %s\n", frase + 10);
    return 0;
}