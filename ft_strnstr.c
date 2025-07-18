/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnataraj <hnataraj@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 17:48:26 by hnataraj          #+#    #+#             */
/*   Updated: 2025/07/15 11:59:09 by hnataraj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t			nlen;
	size_t			i;

	i = 0;
	if (haystack == NULL && needle != NULL && len == 0)
		return (NULL);
	if (*needle == '\0')
		return ((char *)haystack);
	if (*haystack == '\0' || len == 0)
		return (NULL);
	nlen = ft_strlen(needle);
	if (nlen > len)
		return (NULL);
	while (i <= len - nlen)
	{
		if (haystack[i] == needle[0])
		{
			if (ft_strncmp(haystack + i, needle, nlen) == 0)
				return ((char *)&haystack[i]);
		}
		i++;
	}
	return (NULL);
}
