/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanolis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 11:18:19 by tmanolis          #+#    #+#             */
/*   Updated: 2021/05/28 14:15:56 by tmanolis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*str;
	int	i;

	str = (unsigned char	*)b;
	i = 0;
	while (i < len)
	{
		str[i] = (unsigned char)c;
		i++;
	}
	return (str);
}
