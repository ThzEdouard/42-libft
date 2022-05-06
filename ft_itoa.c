/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eflaquet <eflaquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 16:52:50 by eflaquet          #+#    #+#             */
/*   Updated: 2022/05/06 17:54:52 by eflaquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_intlen(int nb)
{
	int result;

	result = 0;
	if(nb == 0)
		return (1);
	if(nb < 0)
	{
		result++;
		nb *= -1;
	}
	while (nb != 0)
	{
		result++;
		nb /= 10;
	}
	return (result);
}
void	ft_rev_int_tab(char *tab, int size)
{
	int	i;
	int	n;
	int	tmp;

	i = 0;
	n = size - 1;
	while (i < size / 2)
	{
		tmp = tab[i];
		tab[i] = tab[n];
		tab[n] = tmp;
		i++;
		n--;
	}
}
char *ft_itoa(int n)
{
	char *result;
	int count;
	int neg;

	count = ft_intlen(n);
	neg = 0;
	result = malloc(sizeof(char) * (ft_intlen(n) + 1));
	if (result == NULL)
		return (NULL);
	result[count--] = 0;
	if (n < 0)
	{
		neg = 1;
		n *= -1;
	}
	while (count >= 0)
	{
		result[count] = n % 10;
		n /= 10;
		count--;
	}
	if (neg)
		result[0] = '-';
	return (result);
}
