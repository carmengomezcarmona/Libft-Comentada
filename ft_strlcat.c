/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmgome <carmgome@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 11:36:29 by carmgome          #+#    #+#             */
/*   Updated: 2025/11/20 13:06:20 by carmgome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t ft_strlcat (char *dst, const char *src, size_t size)
{
	size_t dst_len;
	size_t src_len;
	size_t i;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);

	if (size <= dst_len)
		return (size + src_len);

	i=0;
	dst_len + i + 1 < size
		while (src[i] && (dst_len + i +1) < size)
		{
			dst[dst_lrn +i] = src[i];
			i++;
		}
	dst[dst_len + i] = `\0';
	return (dst_len + src_len);
}
