/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eflaquet <eflaquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 12:42:33 by eflaquet          #+#    #+#             */
/*   Updated: 2022/05/06 02:32:41 by eflaquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t i;
	size_t j;
	char * ptr;

	j = 0;
	if(!s)
		return (NULL);
	i = ft_strlen(s);
	if (i < ((len - start) > 0))
		ptr =(char *)malloc(sizeof(char) * (i + 1));
	else
		ptr =(char *)malloc(sizeof(char) * (len + 1));
	if(!ptr)
		return (NULL);
	while(j < len && start + j <= i && s[start + j])
	{
		ptr[j] = s[start + j];
		j++;
	}
	ptr[j] = 0;
	return(ptr);
}
