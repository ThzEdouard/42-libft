/*************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eflaquet <eflaquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 17:10:40 by eflaquet          #+#    #+#             */
/*   Updated: 2022/05/05 21:11:26 by eflaquet         ###   ########.fr       */
/*                                                                            */
/*************************************************************************** */

#include "libft.h"

void *ft_memset (void *s, int c, size_t n)
{
    char *str = (char *)s;
    size_t i = 0;

    while (i < n)
    {
        str[i] = (char)c;
        i++;
    }
    return (s);
}
