/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnataraj <hnataraj@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 18:23:39 by hnataraj          #+#    #+#             */
/*   Updated: 2025/07/11 12:47:32 by hnataraj         ###   ########.fr       */
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

static int	ft_duplicate(char const *s, char c)
{
	char	word;
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
	
}
****
static int	ft_wordlen(char const *s, char c)
{
	int	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

static char	*ft_duplicate(char const *s, int len)
{
	char	*word;
	int		i;

	word = malloc((len + 1) * sizeof(char));
	if (!word)
		return (NULL);
	i = 0;
	while (i < len)
		word[i++] = s[i++];
	word[i] = '\0';
	return (word);
}

static void	ft_memfree(char **dst, int cnt)
{
	int	i;

	i = 0;
	while (i < cnt)
		free(dst[i++]);
	free(dst);
}

static char	**ft_updatedst(char const *s, char c, char **dst, int wordcnt)
{
	int	i;
	int	len;

	i = 0;
	while (*s && i < wordcnt)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			len = ft_wordlen (s, c);
			dst[i] = ft_duplicate (s, len);
			if (!dst[i])
			{
				ft_memfree(dst, i);
				return (NULL);
			}
			s += len;
			i++;
		}
	}
	dst[i] = NULL;
	return (dst);
}

char	**ft_split(char const *s, char c)
{
	char	**dst;
	int		wordcnt;
	int		inword;

	inword = 0;
	wordcnt = 0;
	if (!s)
		return (NULL);
	while (*s)
	{
		if (*s != c && !inword)
		{
			inword = 1;
			wordcnt++;
		}
		else if (*s == c)
			wordcnt = 0;
		s++;
	}
	dst = malloc((wordcnt + 1) * sizeof(char *));
	if (!dst)
		return (NULL);
	ft_updatedst(s, c, dst, wordcnt);
	return (dst);
}

