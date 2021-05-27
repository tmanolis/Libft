/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanolis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 12:39:50 by tmanolis          #+#    #+#             */
/*   Updated: 2021/05/27 17:25:14 by tmanolis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t j;
	size_t cache;

	i = ft_strlen(dst);
	j = 0;
	cache = ft_strlen(dst) + ft_strlen(src);
	if (dstsize < ft_strlen(dst + 1))
		return (dstsize + ft_strlen(src));
	while (src[j] != '\0' && (i + j) < dstsize - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (cache);
}