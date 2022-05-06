/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eflaquet <eflaquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 21:14:30 by eflaquet          #+#    #+#             */
/*   Updated: 2022/05/05 22:16:42 by eflaquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    char *str = (char *)s;
    size_t i = 0;

    while (i < n)
    {
        if (str[i] == (char)c)
            return ((void*)(s+i));
        i++;
    }
    return(NULL);
}
