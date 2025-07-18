/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnataraj <hnataraj@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 17:04:24 by hnataraj          #+#    #+#             */
/*   Updated: 2025/07/14 11:31:16 by hnataraj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*d = (const unsigned char *)s;

	while (n-- > 0)
	{
		if (*d == (unsigned char)c)
			return ((void *)d);
		d++;
	}
	return (NULL);
}
