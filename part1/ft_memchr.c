/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnataraj <hnataraj@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 17:04:24 by hnataraj          #+#    #+#             */
/*   Updated: 2025/07/09 12:36:43 by hnataraj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*memchr(const void *s, int c, unsigned int n)
{
	const unsigned char	*d = (const unsigned char *)s;

	while (n-- > 0)
	{
		if (*d == c)
			return ((void *)d);
		d++;
	}
	return (0);
}
