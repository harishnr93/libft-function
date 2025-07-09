/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnataraj <hnataraj@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 11:44:46 by hnataraj          #+#    #+#             */
/*   Updated: 2025/07/09 12:27:09 by hnataraj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*tptr;
	size_t			i;

	i = 0;
	tptr = malloc(count * size);
	if (!tptr)
		return (NULL);
	while (i < count * size)
	{
		tptr[i] = 0;
		i++;
	}
	return (tptr);
}
