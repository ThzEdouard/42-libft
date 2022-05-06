/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eflaquet <eflaquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 18:59:36 by eflaquet          #+#    #+#             */
/*   Updated: 2022/05/06 02:08:15 by eflaquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
	void *ptr;
	if(!nmemb || !size || (nmemb == __SIZE_MAX__) || (size == __SIZE_MAX__))
		return (NULL);
	ptr = (void*)malloc(nmemb * size);
	if(!ptr)
		return(NULL);
	ft_bzero(ptr, (nmemb * size));
	return (ptr);
}
