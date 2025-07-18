/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnataraj <hnataraj@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 18:01:04 by hnataraj          #+#    #+#             */
/*   Updated: 2025/07/15 14:42:46 by hnataraj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	skipmatch(char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*pstr;
	size_t	i;
	int		j;
	int		k;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	if (!*s1)
		return (ft_strdup(""));
	j = ft_strlen(s1) - 1;
	while (s1[i] && skipmatch(s1[i], set))
		i++;
	while (j >= 0 && skipmatch(s1[j], set))
		j--;
	if (j < (int)i)
		return (ft_strdup(""));
	pstr = ft_calloc(j - i + 2, sizeof(char));
	if (!pstr)
		return (NULL);
	k = -1;
	while (++k <= j - (int)i)
		pstr[k] = s1[i + k];
	return (pstr);
}
