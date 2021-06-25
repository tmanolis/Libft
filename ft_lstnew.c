/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanolis <tmanolis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 14:18:51 by tmanolis          #+#    #+#             */
/*   Updated: 2021/06/25 15:10:17 by tmanolis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content)
{
   t_list   *tmp;
   tmp = (t_list *)malloc(sizeof(t_list));
   tmp->content = content;
   tmp->next = NULL;

   return (tmp);
}