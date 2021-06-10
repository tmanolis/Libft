/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanolis <tmanolis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 12:05:05 by tmanolis          #+#    #+#             */
/*   Updated: 2021/06/10 12:06:31 by tmanolis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int wordcount(char const *s, char c)
{
    int         i;
    static int  count;

    i = 0;
    count = 0;
    while (s[i] != '\0')
    {
        if (s[i] != c && ((s[i + 1] == c || s[i + 1] == '\0')))
            count++;
        i++;
    }
    return (count);
}

static char *wordcopy(char const *s, char c)
{
    int         i;
    char        *line;

    i = 0;
    while (s[i] != c)
    {
        i++;   
    }
    line = (char *)malloc(sizeof(char) * (i + 1));
    if (!line)
        return (NULL);
    i = 0;
    while (s[i] != c)
    {
        line[i] = s[i];
        i++;
    }
    line[i] = '\0';
    return (line);
}

char **do_the_split(char ** split, char const *s, char c)
{
    int         i;

    i = 0;
    while (*s)
    {
        while (*s == c)
            s++;
        if (*s != c && *s != '\0')
        {
            split[i] = wordcopy(s, c);
            if (!split[i])
            {
                return (NULL);
            }
            i++;
            while (*s != c && *s != '\0')
                s++;
        }
    
    }
	split[i] = NULL;
    return (split);
}

char **ft_split(char const *s, char c)
{
    char        **split;

    if (s == NULL)
        return (NULL);
    split = (char **)malloc(sizeof(char *) * (wordcount(s, c) + 1));
    if (!split)
        return (NULL);
    split = do_the_split(split, s, c);
    return (split);
}