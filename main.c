/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohazerr <mohazerr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 02:31:11 by mohazerr          #+#    #+#             */
/*   Updated: 2022/09/18 23:06:56 by mohazerr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <limits.h>
#include "includes/libft.h"

int main(int argc, char const *argv[])
{
    char dst[10];
    char const src[10] = "bateausur";

    char *func = memcpy(dst,(void*)0,5);
    printf("%s\n",func	);
    return 0;
}