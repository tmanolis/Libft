/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanolis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 15:10:31 by tmanolis          #+#    #+#             */
/*   Updated: 2021/06/02 16:07:32 by tmanolis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	int		i;
	char 	*new_str;

	i = 0;
	new_str = (char	*)malloc(sizeof(char) * len + 1);
	if (!new_str)
		return (NULL);
	if (s == NULL)
		return (NULL);
	if (start < ft_strlen(s)) 
		while (i < len)
		{
			new_str[i] = s[start];
			i++;
			start++;
		}
	new_str[i] = '\0';
	return (new_str);
}
