/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamil <mgamil@42.student.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 03:52:58 by mohazerr          #+#    #+#             */
/*   Updated: 2022/11/08 01:46:48 by mgamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*schar;
	size_t	i;

	i = 0;
	schar = (char *)s;
	while (i < n)
	{
		if (schar[i] == (char)c)
			return (&schar[i]);
		i++;
	}
	return (NULL);
}
