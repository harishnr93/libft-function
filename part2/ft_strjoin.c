/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnataraj <hnataraj@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 15:18:11 by hnataraj          #+#    #+#             */
/*   Updated: 2025/07/09 15:46:07 by hnataraj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	s1len;
	unsigned int	s2len;
	size_t			i;
	size_t			j;
	char			*pstr;

	i = 0;
	j = 0;
	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	pstr = ft_malloc(s1len + s2len + 1, sizeof(char));

	while (s1)
		pstr[i++] = s1[j];
	j = 0;
	while (s2)
		pstr[i++] = s2[j];
	pstr[i] = 0;
	return (pstr);
}
