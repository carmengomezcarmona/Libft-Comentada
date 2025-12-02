/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmgome <carmgome@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 16:27:37 by carmgome          #+#    #+#             */
/*   Updated: 2025/12/01 17:31:21 by carmgome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    unsigned int	i;

    if (!s || !f)
        return ;
    i = 0;
    while (s[i])
    {
        f(i, &s[i]);
        i++;
    }
}

/*
#include <stdio.h>
#include "libft.h"

void to_uppercase(unsigned int i, char *c)
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
    ft_striteri(str1, to_uppercase);
    printf("Después: %s\n\n", str1);

    printf("Antes: %s\n", str2);
    ft_striteri(str2, to_uppercase);
    printf("Después: %s\n\n", str2);

    return 0;
}
*/