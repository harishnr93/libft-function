/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnataraj <hnataraj@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 16:31:41 by hnataraj          #+#    #+#             */
/*   Updated: 2025/07/14 12:47:02 by hnataraj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*r;

	r = 0;
	while (*s)
	{
		if (*s == (char)c)
			r = ((char *)s);
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (r);
}
