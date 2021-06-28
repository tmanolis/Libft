/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanolis <tmanolis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 17:12:05 by tmanolis          #+#    #+#             */
/*   Updated: 2021/06/28 19:29:46 by tmanolis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list  *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list  *new_list;
    t_list  *new_node;
    
    new_list = NULL;
    if (!lst || !f)
        return (NULL);
    while (lst)
    {
        new_node = ft_lstnew((*f)(lst->content));
        if (!new_node)
        {
            ft_lstclear(&new_list, del);
            return (NULL);
        }
        ft_lstadd_back(&new_list, new_node);
        lst = lst->next;
    }
    return (new_list);
}

// Itère sur la liste lst et applique la fonction f au
// contenu de chaque élément. Crée une nouvelle liste
// résultant des applications successives de f. la
// fonction del est la pour detruire le contenu d un
// element si necessaire