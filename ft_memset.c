/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmgome <carmgome@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 15:32:46 by carmgome          #+#    #+#             */
/*   Updated: 2025/11/17 15:32:49 by carmgome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr
	ptr = (unsigned char *)s;
	size_t	i
	i = 0;

	while (i < n)
	{
		ptr[i] = c;
		i++;
	}
	return (s);
}
