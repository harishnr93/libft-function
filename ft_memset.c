/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnataraj <hnataraj@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 13:54:19 by hnataraj          #+#    #+#             */
/*   Updated: 2025/07/18 10:08:09 by hnataraj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *b, int c, int len)
{
	unsigned char	*ptr;

	ptr = b;
	while (len > 0)
	{
		*ptr = (unsigned char) c;
		ptr++;
		len--;
	}
	return (b);
}
