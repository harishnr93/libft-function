/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnataraj <hnataraj@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 15:18:11 by hnataraj          #+#    #+#             */
/*   Updated: 2025/07/15 11:56:03 by hnataraj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1len;
	size_t	s2len;
	size_t	i;
	size_t	j;
	char	*pstr;

	i = 0;
	j = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	pstr = ft_calloc(s1len + s2len + 1, sizeof(char));
	if (!pstr)
		return (NULL);
	while (j < s1len)
		pstr[i++] = s1[j++];
	j = 0;
	while (j < s2len)
		pstr[i++] = s2[j++];
	pstr[i] = '\0';
	return (pstr);
}
