/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oessoufi <oessoufi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 16:00:51 by oessoufi          #+#    #+#             */
/*   Updated: 2024/11/02 11:19:20 by oessoufi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	to_allocate(int n)
{
	unsigned int	nbr;
	size_t			size;

	nbr = n;
	if (n < 0)
	{
		size = 1;
		nbr = -n;
	}
	else if (n == 0)
		size = 1;
	else
		size = 0;
	while (nbr > 0)
	{
		size++;
		nbr = nbr / 10;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	size_t			size;
	char			*str;
	unsigned int	nbr;

	size = to_allocate(n);
	str = (char *) malloc(size + 1);
	if (str == NULL)
		return (NULL);
	str[size] = 0;
	size--;
	if (n < 0)
		nbr = -n;
	else
		nbr = n;
	while (size > 0)
	{
		str[size] = (nbr % 10 + '0');
		nbr = nbr / 10;
		size--;
	}
	if (n < 0)
		str[size] = '-';
	else
		str[size] = (nbr % 10 + '0');
	return (str);
}
