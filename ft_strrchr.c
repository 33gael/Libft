/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaeducas <gaeducas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 11:57:35 by gaeducas          #+#    #+#             */
/*   Updated: 2025/10/16 12:43:05 by gaeducas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
    while (s[i])
        i++;
    i--;
	while (s[i])
	{
		if (s[i] == c)
        {
            return ((char *)s + i);
        }
        i--;
	}
    return (NULL);
}
