/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohazerr <mohazerr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 12:38:03 by mohazerr          #+#    #+#             */
/*   Updated: 2022/09/09 14:37:46 by mohazerr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

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
	var[len] = '\0';
	if (n < 0)
	{
		n *= -1;
		var[0] = '-';
		i = 1;
	}
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
		return (var = "-2147483648");
	if (n == 0)
		return (var = "0");
	var = malloc(sizeof(char) * calcsize(n) + 1);
	if (!var)
		return (NULL);
	var = itoarray(n, var);
	return (var);
}
