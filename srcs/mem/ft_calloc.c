/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohazerr <mohazerr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 16:29:49 by mohazerr          #+#    #+#             */
/*   Updated: 2022/09/19 23:09:26 by mohazerr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*new;

	new = malloc(size * count);
	if (!new)
		return (NULL);
	ft_bzero(new, size * count);
	return (new);
}
