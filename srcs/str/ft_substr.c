/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohazerr <mohazerr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 20:27:01 by mohazerr          #+#    #+#             */
/*   Updated: 2022/09/19 22:16:24 by mohazerr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stddef.h>

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
