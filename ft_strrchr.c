/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eflaquet <eflaquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 21:17:46 by eflaquet          #+#    #+#             */
/*   Updated: 2022/05/05 22:38:51 by eflaquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char *ft_strrchr(const char *s, int c)
{
    int i = ft_strlen((char*)s);

    while (i >= 0)
    {
        if (s[i] == (char)c)
            return ((char *)s + i);

        i--;
    }
    return (NULL);
}
