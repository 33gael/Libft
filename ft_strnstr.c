/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaeducas <gaeducas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 13:22:10 by gaeducas          #+#    #+#             */
/*   Updated: 2025/10/16 14:06:53 by gaeducas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!little)
		return ((char *)big);
	while (big[i] && i < len)
	{
		j = 0;
		while (big[i + j] && big[i + j] == little[j] && i + j < len)
			j++;
		if (little[j] == '\0')
			return ((char *)big + i);
		i++;
	}
	return (NULL);
}
