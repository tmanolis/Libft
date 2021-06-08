/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanolis <tmanolis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 16:44:55 by tmanolis          #+#    #+#             */
/*   Updated: 2021/06/08 17:30:29 by tmanolis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{  
    unsigned int    nb;

    if (n < 0)
        nb = n * -1;
    else
        nb = n;
    if (nb > 9)
        ft_putnbr_fd(nb / 10, fd);
    ft_putchar_fd((nb % 10 + 48), fd);
}   