/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamil <mgamil@42.student.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 16:29:49 by mohazerr          #+#    #+#             */
/*   Updated: 2022/11/08 01:59:57 by mgamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#define MAXSIZET 18446744073709551615UL
void	*ft_calloc(size_t count, size_t size)
{
	void	*new;

	new = malloc(size * count);
	if (!new)
		return (NULL);
	if (size >= MAXSIZET || count >= MAXSIZET)
		return (NULL);	
	ft_bzero(new, size * count);
	return (new);
}
