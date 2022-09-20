/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohazerr <mohazerr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 12:38:03 by mohazerr          #+#    #+#             */
/*   Updated: 2022/09/19 17:00:58 by mohazerr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strcpy(char *s1, char *s2)
{
	int	i;

	i = -1;
	while (s2[++i])
		s1[i] = s2[i];
	s1[i] = '\0';
	return (s1);
}

int	calcsize(int nb)
{
	int	i;

	i = 0;
	if (nb < 0)
	{
		nb *= -1;
		i++;
	}
	while (nb > 0)
	{
		nb /= 10;
		i++;
	}
	return (i);
}

char	*itoarray(int n, char *var)
{
	int	len;
	int	i;

	i = 0;
	len = calcsize(n) - 1;
	if (n < 0)
	{
		n *= -1;
		var[0] = '-';
		i = 1;
		var[len + 1] = '\0';
	}
	else
		var[len] = '\0';
	while (i <= len)
	{
		var[len] = n % 10 + '0';
		n /= 10;
		len--;
	}
	return (var);
}

char	*ft_itoa(int n)
{
	char	*var;

	if (n == -2147483648)
	{
		var = malloc(sizeof(char) * ft_strlen("-2147483648") + 1);
		var = ft_strcpy(var, "-2147483648");
		var[ft_strlen("-2147483648") + 1] = '\0';
		return (var);
	}
	if (n == 0)
	{
		var = malloc(sizeof(char) * 2);
		var[0] = '0';
		var[1] = '\0';
		return (var);
	}
	var = malloc(sizeof(char) * calcsize(n) + 1);
	if (!var)
		return (NULL);
	var = itoarray(n, var);
	return (var);
}
