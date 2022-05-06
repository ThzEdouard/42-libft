/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eflaquet <eflaquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 11:59:09 by eflaquet          #+#    #+#             */
/*   Updated: 2022/05/05 21:15:09 by eflaquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
size_t ft_strlen(const char * theString )
{
	const char * str = theString;
	while (*theString)
		theString++;
	return (theString - str);
}