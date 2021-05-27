/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanolis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 19:01:10 by tmanolis          #+#    #+#             */
/*   Updated: 2021/05/27 19:19:11 by tmanolis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	
	i = ft_strlen((char *)s);
	if (s[i] == c)
	   return ((char *)s + i);
	while (s[--i])
	{
		if (s[i] == c)
			return ((char *)s + i);
	}
		return (0);
}
