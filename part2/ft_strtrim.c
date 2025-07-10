/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnataraj <hnataraj@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 18:01:04 by hnataraj          #+#    #+#             */
/*   Updated: 2025/07/10 16:33:01 by hnataraj         ###   ########.fr       */
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
	int		dstlen;
	char	*pstr;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = ft_strlen(s1) - 1;
	k = 0;
	if (ft_strlen(s1) == 0)
		return (ft_strdup(""));
	while (skipmatch(s1[i], set))
		i++;
	while (skipmatch(s1[j], set))
		j--;
	dstlen = j - (i - 1);
	if (dstlen <= 0 || i >= ft_strlen(s1))
		return (ft_strdup(""));
	pstr = ft_malloc(dstlen + 1, sizeof(char));
	if (!pstr)
		return (NULL);
	while (k < dstlen)
		pstr[k] = s1[i + k++];
	return (pstr);
}
