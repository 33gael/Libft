/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaeducas <gaeducas@student.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 16:28:20 by gaeducas          #+#    #+#             */
/*   Updated: 2025/10/30 11:48:05 by gaeducas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_strcat(char const *dest, char const *src)
{
	int		i;
	int		j;
	char	*dst;

	i = 0;
	j = 0;
	dst = (char *)dest;
	while (dst[j])
		j++;
	while (src[i])
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;

	s3 = ft_calloc(((ft_strlen(s1)) + ft_strlen(s2) + 1), sizeof(char));
	if (!s3)
		return (NULL);
	ft_strcat(s3, s1);
	ft_strcat(s3, s2);
	return (s3);
}
