/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnataraj <hnataraj@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 11:36:05 by hnataraj          #+#    #+#             */
/*   Updated: 2025/07/09 12:36:45 by hnataraj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*memcpy(void *dst, const void *src, int n)
{
	char	*s;
	char	*d;
	int		i;

	i = 0;
	s = (char *)src;
	d = (char *)dst;

	while (n > 0)
	{
		d[i] = s[i];
		i++;
		n--;
	}
	return ((void *)d);
}
