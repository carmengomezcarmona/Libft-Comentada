/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmgome <carmgome@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 11:38:37 by carmgome          #+#    #+#             */
/*   Updated: 2025/12/02 10:28:42 by carmgome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	long		num;
	int			digits;
	int			neg;
	char		*str;
	int			i;

	num = n;
	neg = 0;
	digits = 0;
	if (num < 0)
	{
		neg = 1;
		num = -num;
	}
	if (num == 0)
		digits = 1;
	else
	{
		long	temp = num;
		while (temp > 0)
		{
			temp = temp / 10;
			digits++;
		}
	}
	str = (char *)malloc(digits + neg + 1);
	if (!str)
		return (NULL);
	i = digits + neg;
	str[i] = '\0';
	i--;
	if (num == 0)
		str[i] = '0';
	while (num > 0)
	{
		str[i] = (num % 10) + '0';
		num /= 10;
		i--;
	}
	if (neg)
		str[0] = '-';
	return (str);
}

/*  
#include <stdio.h>
#include "libft.h"

int main(void)
{
    int nums[] = {123, -456, 0, 2147483647, -2147483648};
    size_t i = 0;

    while (i < 5)
    {
        char *str = ft_itoa(nums[i]);
        if (str)
        {
            printf("ft_itoa(%d) = %s\n", nums[i], str);
            free(str);
        }
        else
            printf("Error malloc para %d\n", nums[i]);
        i++;
    }

    return 0;
}
*/
