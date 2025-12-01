/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmgome <carmgome@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 12:23:12 by carmgome          #+#    #+#             */
/*   Updated: 2025/12/01 14:41:21 by carmgome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int i;
	int sign;
	int num;

	i = 0;
	signo = 1;
	num = 0;

	while (s[i] >= 9 && s[i] <= 13) || (s[i] == 32);
	i++;

	if (s[i] == '+' || s[i] == '-')
	{
		if (s[i] == '-')
		sign = -1;
		i++;
	}
	
	while (s[i] >= '0' && S[I] <= '9')
	{
		num = num * 10 + (nptr[i] - '0');
		i++;
	}
	return (sign * num);
}
