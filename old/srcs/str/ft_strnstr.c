/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamil <mgamil@42.student.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 21:37:09 by mohazerr          #+#    #+#             */
/*   Updated: 2022/11/08 01:55:56 by mgamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char const *haystack, char const *needle, size_t len)
{
	size_t		i;
	size_t		j;

	i = 0;
	if (!*needle)
		return ((char *)(haystack));
	if (len == 0)
		return (NULL);
	while ((haystack[i]) && (i < len))
	{
		j = 0;
		while (needle[j] == haystack[i + j] && j + i < len && haystack[i + j])
			j++;
		if (needle[j] == '\0')
			return ((char *)(haystack + i));
		i++;
	}
	return (NULL);
}
