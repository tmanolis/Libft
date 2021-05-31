/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanolis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 16:35:41 by tmanolis          #+#    #+#             */
/*   Updated: 2021/05/31 17:19:57 by tmanolis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dest;
	unsigned char	*source;

	dest = (unsigned char	*)dst;
	source = (unsigned char	*)src;
	if (dst > src)
	{
		while (len--)
		{
			dest[len] = source[len];
		}
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);	
}
