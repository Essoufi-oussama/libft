/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oessoufi <oessoufi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 14:15:43 by oessoufi          #+#    #+#             */
/*   Updated: 2024/11/13 14:29:51 by oessoufi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char		*cdest;
	const unsigned char	*csrc;

	if (dest == NULL && src == NULL)
		return (NULL);
	cdest = (unsigned char *) dest;
	csrc = (unsigned char *) src;
	if (cdest == csrc)
		return (dest);
	if (csrc > cdest)
	{
		while (len--)
			*cdest++ = *csrc++;
	}
	else
	{
		cdest += len - 1;
		csrc += len - 1;
		while (len--)
			*cdest-- = *csrc--;
	}
	return (dest);
}
