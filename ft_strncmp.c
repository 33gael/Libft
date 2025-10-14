/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaeducas <gaeducas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 15:25:48 by gaeducas          #+#    #+#             */
/*   Updated: 2025/10/14 16:42:55 by gaeducas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i;

    i = 0;
    while (s1[i] && s2[i] && s1[i] == s2[i] && i < n)
    {
        i++;
    }
    if (i == n)
        i--;
    if (n < 1)
        return (0);
    return (s1[i] - s2[i]);
}
