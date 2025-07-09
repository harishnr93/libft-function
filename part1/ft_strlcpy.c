/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnataraj <hnataraj@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 12:19:36 by hnataraj          #+#    #+#             */
/*   Updated: 2025/07/08 14:46:59 by hnataraj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlcpy(char *dst, const char *src, int dstsize)
{
	char		*sdst;
	char		*edst;
	const char	*s = src;

	sdst = dst;
	edst = dst + dstsize;

	while (*s != '\0' && sdst < edst)
		*sdst++ = *s++;

	if (sdst < edst)
		*sdst = 0;
	else if (dstsize > 0)
		sdst[-1] = 0;

	while (*s != '\0')
		s++;

	return (s - src);
}
