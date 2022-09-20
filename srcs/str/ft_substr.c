/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohazerr <mohazerr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 20:27:01 by mohazerr          #+#    #+#             */
/*   Updated: 2022/09/20 03:34:18 by mohazerr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		i;
	char		*var;

	var = malloc(sizeof(char) * len + 1);
	if (s == 0)
		return (NULL);
	if (!var)
		return (NULL);
	i = 0;
	while (i < len)
	{
		var[i] = s[start + i];
		i++;
	}
	var[i] = '\0';
	return (var);
}
