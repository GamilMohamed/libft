/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohazerr <mohazerr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 16:29:49 by mohazerr          #+#    #+#             */
/*   Updated: 2022/09/20 15:37:38 by mohazerr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#define MAXSIZET 18446744013709551615UL

void	*ft_calloc(size_t count, size_t size)
{
	void	*new;

	if (count > MAXSIZET || size > MAXSIZET)
		return (NULL);
	new = malloc(size * count);
	if (new)
		ft_bzero(new, size * count);
	return (new);
}
