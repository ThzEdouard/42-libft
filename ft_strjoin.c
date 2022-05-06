/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eflaquet <eflaquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 13:09:32 by eflaquet          #+#    #+#             */
/*   Updated: 2022/05/06 11:48:13 by eflaquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	int s1_len;
	int s2_len;
	char * ptr;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	ptr = (char*)malloc(sizeof(char) * (s1_len +s2_len + 1));
	if(!ptr)
		return(NULL);
	ft_strlcpy(ptr, s1, s1_len + 1);
	ft_strlcat(ptr,s2, s1_len + s2_len + 1);
	return (ptr);
}