/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanolis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 18:09:03 by tmanolis          #+#    #+#             */
/*   Updated: 2021/05/31 19:10:52 by tmanolis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char	*)s1;
	str2 = (unsigned char	*)s2;
	while ((str1[i] || str2[i]) && i < n )
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;	
	}
	return (0);
}
