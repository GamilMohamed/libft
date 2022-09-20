/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohazerr <mohazerr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 17:11:13 by mohazerr          #+#    #+#             */
/*   Updated: 2022/09/20 03:34:34 by mohazerr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	charcheck(char a, char b)
{
	if (a == b)
		return (1);
	return (0);
}

int	count(char const *str, char charset)
{
	int	i;
	int	counter;

	i = 0;
	counter = 0;
	while (str[i])
	{
		while (str[i] && charcheck(str[i], charset))
			i++;
		if (str[i] == '\0')
			break ;
		counter++;
		while (str[i] && !(charcheck(str[i], charset)))
			i++;
	}
	return (counter);
}

char	*ft_strtsub(char const *str, int start, int end)
{
	int		i;
	char	*var;

	i = 0;
	var = malloc(sizeof(char) * end - start + 1);
	while (start + i < end && str[i])
	{
		var[i] = str[start + i];
		i++;
	}
	var[i] = '\0';
	return (var);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		nb;
	int		start;
	char	**tab;
	int		index;

	if (s == 0)
		return (NULL);
	i = 0;
	index = 0;
	nb = count(s, c);
	tab = malloc(sizeof(char *) * nb);
	if (!tab)
		return (NULL);
	while (s[i])
	{
		while (s[i] && charcheck(s[i], c))
			i++;
		start = i;
		while (s[i] && !(charcheck(s[i], c)))
			i++;
		tab[index++] = ft_strtsub(s, start, i);
	}
	tab[nb] = NULL;
	return (tab);
}
