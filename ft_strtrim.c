/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaeducas <gaeducas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 11:01:10 by gaeducas          #+#    #+#             */
/*   Updated: 2025/10/20 21:43:43 by gaeducas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_set(const char *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*dest;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	while (s1[i] && is_set(set, s1[i]))
		i++;
	j = ft_strlen(s1) - 1;
	while (s1[j] && is_set(set, s1[j]))
		j--;
	j++;
	dest = ft_substr(s1, i, (j - i));
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{
	char *str;
	//						i				j
	str = ft_strdup("        Pipi       Caca      ");
	printf("%s\n", ft_strtrim(str, " ij\0"));
}
	*/