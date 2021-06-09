/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanolis <tmanolis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 12:05:05 by tmanolis          #+#    #+#             */
/*   Updated: 2021/06/09 18:44:51 by tmanolis         ###   ########.fr       */
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

// static int freeline(char *)

char **ft_split(char const *s, char c)
{
    char        **split;
    int         i;

    split = (char **)malloc(sizeof(char *) * (wordcount(s, c) + 1));
    if (!split)
        return (NULL);
    
    i = 0;
    while (*s)
    {
        while (*s == c)
        {
            s++;
        }
        if (*s != c && *s != '\0')
        {
            split[i] = wordcopy(s, c);
            if (!split[i])
            {
                // split[i] = freeline();
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

int main(void)
{
    char	**splited;
	char	**dent;
    char	s[] = "Coucou  toi mon       ami";

    splited = ft_split(s, ' ');
	if (splited)
	{
		dent = splited;
		while (*splited)
		{
			printf("%s\n", *splited);
			free(*splited++);
		}
		printf("%s\n", *splited);
		free(dent);
	}
	return (0);
}