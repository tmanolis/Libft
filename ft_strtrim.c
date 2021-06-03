/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanolis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 16:35:51 by tmanolis          #+#    #+#             */
/*   Updated: 2021/06/03 16:42:42 by tmanolis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

size_t	ft_start(char const *s1, char const *set)
{
	size_t	start;
	start = 0;
	while (ft_strchr(set, s1[start]))
		start++;
	return (start);
}

size_t	ft_end(char const *s1, char const *set)
{
	size_t	end;
	end  = ft_strlen(s1);
	while (ft_strchr(set, s1[end]))
		end--;
	return (end);
}

char *ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	i;
	char 	*s1_trim;

	start = ft_start(s1, set);
	end = ft_end(s1, set);
	i = 0;
	s1_trim = (char	*)malloc(sizeof(char) * (end - start) + 2);
	if (!s1_trim)
		return (NULL);
	while (start <= end)
	{
		s1_trim[i] = s1[start];
		i++;
		start++;
	}
	s1_trim[i] = '\0';
	return (s1_trim);
}
