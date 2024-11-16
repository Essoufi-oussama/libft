/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oessoufi <oessoufi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:55:20 by oessoufi          #+#    #+#             */
/*   Updated: 2024/11/07 16:22:58 by oessoufi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*allocated_str(char const *s1, size_t start, size_t size);
static int	to_trim(char const s1, char const *set);

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	size;

	if (s1 == NULL || set == NULL)
		return (NULL);
	size = ft_strlen(s1);
	if (size == 0)
		return (ft_strdup(""));
	start = 0;
	end = size - 1;
	while (start < size && to_trim(s1[start], set))
		start++;
	while (end > 0 && to_trim(s1[end], set))
		end--;
	return (allocated_str(s1, start, end - start + 1));
}

static char	*allocated_str(char const *s1, size_t start, size_t size)
{
	char	*str;
	size_t	i;

	if (size <= 0 || start >= ft_strlen(s1))
		return (ft_strdup(""));
	str = (char *)malloc(size + 1);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		str[i] = s1[start];
		i++;
		start++;
	}
	str[i] = 0;
	return (str);
}

static int	to_trim(char const s1, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == s1)
			return (1);
		i++;
	}
	return (0);
}
