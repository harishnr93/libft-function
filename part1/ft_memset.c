/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnataraj <hnataraj@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 13:54:19 by hnataraj          #+#    #+#             */
/*   Updated: 2025/07/07 18:05:53 by hnataraj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memset(void *b, int c, int len)
{
	int				i;
	unsigned char	*ptr;

	i = 0;
	ptr = b;
	while (len > 0)
	{
		*ptr = (unsigned char) c;
		ptr++;
		len--;
	}
	return (b);
}

// int main(void)
// {
// 	char str[5] = {'1','2','3','4','5'};
// 	ft_memset(str + 1, 'b', 1);
// 	printf("After memset():  %c", str[1]);
// }
