/*/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmgome <carmgome@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 15:32:46 by carmgome          #+#    #+#             */
/*   Updated: 2025/12/05 12:46:38 by carmgome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
/*#include <stdio.h>
int main(void)
{
	int pegatina;
	pegatina = 'E';
	size_t n;
	n = 3;
	char s[] = "aaaaaaaaaa";
	char *resultadoFuncion;
	resultadoFuncion = ft_memset(s, pegatina, n);
	printf("%s",resultadoFuncion);
}*/
