/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnataraj <hnataraj@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 14:47:22 by hnataraj          #+#    #+#             */
/*   Updated: 2025/07/08 15:39:19 by hnataraj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlcat(char *dst, const char *src, int dstsize)
{
	int	slen;
	int	dlen;

	slen = ft_strlen(src);
	dlen = ft_strlen(dst);
	if (dlen >= dstsize)
		dlen = dstsize;
	if (dlen == dstsize)
		return (dstsize + slen);
	if (slen < dstsize - dlen)
		ft_memcpy(dst + dlen, src, slen + 1);
	else
	{
		ft_memcpy(dst + dlen, src, dstsize - dlen - 1);
		dst[dstsize - 1] = '\0';
	}
	return (dlen + slen);
}
