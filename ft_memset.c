/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oessoufi <oessoufi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 11:36:31 by oessoufi          #+#    #+#             */
/*   Updated: 2024/11/11 11:14:56 by oessoufi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	d;
	unsigned char	*ptr;

	ptr = (unsigned char *) b;
	d = (unsigned char) c;
	while (len > 0)
	{
		*ptr = d;
		ptr++;
		len--;
	}
	return (b);
}
