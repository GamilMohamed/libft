/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamil <mgamil@42.student.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 20:27:01 by mohazerr          #+#    #+#             */
/*   Updated: 2022/11/08 02:26:52 by mgamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		i;
	char		*var;

	i = 0;
	var = malloc(sizeof(char) * len + 1);
	if (!var || s == 0)
		return (NULL);
	while ((i < start) && (s[i]))
		i++;
	if (s[i] == '\0')
		return (ft_strdup(""));
	i = 0;
	while (i < len && s[i])
	{
		var[i] = s[start + i];
		i++;
	}
	var[i] = '\0';
	return (var);
}
