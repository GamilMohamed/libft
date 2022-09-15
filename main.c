/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohazerr <mohazerr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 02:31:11 by mohazerr          #+#    #+#             */
/*   Updated: 2022/09/15 03:09:38 by mohazerr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <limits.h>
#include "includes/libft.h"

int main(int argc, char const *argv[])
{
	char *str = "01234éqskjdqsjdoisqhdjqs";
	size_t size = 10;
	char *ret = ft_substr(str, 10, size);
	if (!strncmp(ret, "", 1))
	{
		printf("%s\n",ret);
		printf("%s\n","ok");
	}
	printf("%s\n",ret);
	printf("%s\n","pas ok");
	return 0;
}