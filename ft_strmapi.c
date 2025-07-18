/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnataraj <hnataraj@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 18:08:37 by hnataraj          #+#    #+#             */
/*   Updated: 2025/07/15 14:09:04 by hnataraj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*res;
	unsigned int	slen;

	if (!s || !f)
		return (NULL);
	slen = ft_strlen(s);
	res = malloc((slen + 1) * sizeof(char));
	if (!res)
		return (NULL);
	i = -1;
	while (++i < slen)
		res[i] = (*f)(i, s[i]);
	res[i] = 0;
	return (res);
}
