/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnataraj <hnataraj@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 17:48:26 by hnataraj          #+#    #+#             */
/*   Updated: 2025/07/08 18:03:39 by hnataraj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*strnstr(const char *haystack, const char *needle, unsigned int len)
{
	unsigned int	nlen;
	int				i;

	i = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	if (*haystack == '\0' || len == 0)
		return (0);
	nlen = ft_strlen(needle);
	while (i <= len - nlen)
	{
		if (haystack[i] == needle[0])
		{
			if (strncmp(haystack + i, needle, nlen) == 0)
				return ((char *)&haystack[i]);
		}
	}
	return (0);
}
