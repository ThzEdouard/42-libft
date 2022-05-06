/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eflaquet <eflaquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 22:35:52 by eflaquet          #+#    #+#             */
/*   Updated: 2022/05/05 00:31:55 by eflaquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t src_len;
	size_t dest_len;
	int i = 0;

	src_len = ft_strlen(src);
	dest_len = ft_strlen(dst);
	int j= dest_len;
	if(dest_len < size - 1 && size > 0)
	{
		while (src[i] && dest_len+i< size-1)
  		{
  			  dst[j] = src[i];
  			  j++;
  			  i++;
  		}
	}
	if (dest_len >= size)
		dest_len = size;
  	return (dest_len + src_len);
}
