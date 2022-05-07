/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eflaquet <eflaquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 14:12:33 by eflaquet          #+#    #+#             */
/*   Updated: 2022/05/07 15:17:54 by eflaquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_set(char c, char *set)
{
	int	i ;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_strtrim_len(char const *s1, char const *set)
{
	int	i;

	i = 0;
	while (*s1)
	{
		if (ft_set(*s1, (char *)set) == 0)
			i++;
		s1++;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		s1_new_len;
	size_t	i;
	int		j;
	char	*ptr;

	i = 0;
	j = 0;
	s1_new_len = ft_strtrim_len(s1, set);
	ptr = (char *)malloc((s1_new_len + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	while (i < ft_strlen(s1))
	{
		if (ft_set(s1[i], (char *)set) == 0)
			ptr[j++] = s1[i];
		i++;
	}
	ptr[j] = 0;
	return (ptr);
}
