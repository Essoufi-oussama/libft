/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oessoufi <oessoufi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 09:31:36 by oessoufi          #+#    #+#             */
/*   Updated: 2024/11/05 17:29:17 by oessoufi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ptr;
	size_t				i;
	unsigned char		ch;

	ptr = s;
	i = 0;
	ch = (unsigned char) c;
	while (i < n)
	{
		if (ptr[i] == ch)
			return ((void *)s + i);
		i++;
	}
	return (NULL);
}
