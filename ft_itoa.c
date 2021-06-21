/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanolis <tmanolis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 11:29:56 by tmanolis          #+#    #+#             */
/*   Updated: 2021/06/21 12:29:42 by tmanolis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"	

int	count_unit(int n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (count + 1);
	if (n < 0)
	{
		n = n * -1;
		count++;
	}
	while (n)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char *ft_itoa(int n)
{
	int 	i;
	int		count;
	char	*str;

	count = count_unit(n);
	str = (char *)malloc(sizeof(char) * (count + 1));
	if (!str)
		return (NULL);
	i = 0;
	if (n < 0)
	{
		str[i] = '-';
		n = n * -1;
		i++;
	}
	str[count] = '\0';
	while (i < count)
	{
		count--;
		str[count] = (n % 10) + 48;
		n = n / 10;
	}
	return (str);
}