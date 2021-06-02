/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanolis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 16:35:51 by tmanolis          #+#    #+#             */
/*   Updated: 2021/06/02 17:37:57 by tmanolis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

size_t	ft_is_set(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		while (set[j] != '\0')
		{
			if (s1[i] == )
		}	
	}
}

char *ft_strtrim(char const *s1, char const *set)
{
	char *s1_trim;

	s1_trim = (char	*)malloc(sizeof(char) * ft_strlen(s1) + 1);
	
}
