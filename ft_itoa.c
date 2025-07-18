/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnataraj <hnataraj@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 18:22:44 by hnataraj          #+#    #+#             */
/*   Updated: 2025/07/14 12:45:44 by hnataraj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	numlength(long nr)
{
	int	len;

	len = 0;
	if (nr < 0)
	{
		len++;
		nr = nr * -1;
	}
	if (nr == 0)
		len++;
	while (nr != 0)
	{
		nr = nr / 10;
		len++;
	}
	return (len);
}

static char	*memalloc(int nlen)
{
	char	*ptr;

	ptr = malloc((nlen + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	ptr[0] = '0';
	return (ptr);
}

char	*ft_itoa(int n)
{
	long	nr;
	char	*dst;
	int		nlen;
	int		i;

	nr = n;
	i = 0;
	nlen = numlength(nr);
	dst = memalloc(nlen);
	if (!dst)
		return (NULL);
	if (nr < 0)
	{
		dst[0] = '-';
		nr = nr * -1;
	}
	i = nlen - 1;
	while (nr != 0)
	{
		dst[i] = ((nr % 10) + 48);
		nr = nr / 10;
		i--;
	}
	dst[nlen] = 0;
	return (dst);
}
