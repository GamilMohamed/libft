/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohazerr <mohazerr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 21:37:09 by mohazerr          #+#    #+#             */
/*   Updated: 2022/09/11 19:20:17 by mohazerr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strnstr(char const *haystack, char const *needle, size_t len)
{
	int		i;
	size_t	x;

	x = 0;
	if (!*needle)
		return ((char *)(haystack));
	if (len == 0)
		return (NULL);
	while ((*haystack) && (x < len))
	{
		i = 0;
		while ((needle[i] == *haystack) && (x < len))
		{
			if (needle[i + 1] == '\0')
				return ((char *)(haystack - i));
			i++;
			haystack++;
			x++;
		}
		haystack++;
		x++;
	}
	return (NULL);
}
