/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnataraj <hnataraj@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 18:23:39 by hnataraj          #+#    #+#             */
/*   Updated: 2025/07/11 16:00:15 by hnataraj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wordcnt(char const *s, char c)
{
	int	cnt;

	cnt = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			cnt++;
			while (*s && *s != c)
				s++;
		}
	}
	return (cnt);
}

static char	*ft_duplicate(char const *s, char c)
{
	char	*word;
	int		len;
	int		i;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	word = malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	i = -1;
	while (++i < len)
		word[i] = s[i];
	word[i] = '\0';
	return (word);
}

static void	ft_memfree(char **dst, int cnt)
{
	while (cnt--)
		free(dst[cnt]);
	free(dst);
}

char	**ft_split(char const *s, char c)
{
	char	**dst;
	int		words;
	int		i;

	if (!s)
		return (NULL);
	words = ft_wordcnt(s, c);
	dst = malloc((words + 1) * sizeof(char *));
	if (!dst)
		return (NULL);
	i = 0;
	while (i < words)
	{
		while (*s == c)
			s++;
		dst[i] = ft_duplicate(s, c);
		if (!dst[i])
			return (ft_memfree(dst, i), NULL);
		while (*s && *s != c)
			s++;
		i++;
	}
	dst[i] = NULL;
	return (dst);
}
