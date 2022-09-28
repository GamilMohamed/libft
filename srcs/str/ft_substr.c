/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohazerr <mohazerr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 20:27:01 by mohazerr          #+#    #+#             */
/*   Updated: 2022/09/24 02:05:21 by mohazerr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		i;
	char		*var;

	i = 0;
	var = malloc(sizeof(char) * len + 1);
	if (s == 0)
		return (NULL);
	if (!var)
		return (NULL);
	while ((i < start) && (s[i]))
		i++;
	if (s[i] == '\0')
		return (ft_strdup(""));
	else
	{
		start = 0;
		while (start < len)
		{
			var[start] = s[start + i];
			start++;
		}
	}
	var[start] = '\0';
	return (var);
}
