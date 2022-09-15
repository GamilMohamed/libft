/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohazerr <mohazerr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 13:31:53 by mohazerr          #+#    #+#             */
/*   Updated: 2022/09/13 14:44:07 by mohazerr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int	ft_isspace(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	return (0);
}

char	*ft_strsubtrim(char const *str, int start, int end)
{
	int		i;
	char	*var;

	i = 0;
	var = malloc(sizeof(char) * end - start + 1);
	if (!var)
		return (NULL);
	while (start + i <= end && str[i])
	{
		var[i] = str[start + i];
		i++;
	}
	var[i] = '\0';
	return (var);
}

char	*ft_strtrim(char const *s)
{
	int		i;
	int		start;
	int		len;
	char	*var;

	len = ft_strlen((char *)s);
	i = 0;
	start = 0;
	while (s[i] && ft_isspace(s[i]))
		i++;
	if (s[i] == '\0')
		return (NULL);
	start = i;
	len--;
	while (s[i] && ft_isspace(s[len]))
		len--;
	var = ft_strsubtrim(s, start, len);
	return (var);
}
