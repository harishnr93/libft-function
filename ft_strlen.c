/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnataraj <hnataraj@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 13:37:52 by hnataraj          #+#    #+#             */
/*   Updated: 2025/07/11 15:56:12 by hnataraj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(char const *str)
{
	int	idx;

	idx = 0;
	while (str[idx] != '\0')
		idx++;
	return (idx);
}
