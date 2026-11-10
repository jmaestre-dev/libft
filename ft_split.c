/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaestre <jmaestre@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 15:24:07 by jmaestre          #+#    #+#             */
/*   Updated: 2026/10/22 14:20:37 by jmaestre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	get_num_words(char const *s, char c)
{
	size_t	num_words;

	num_words = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			num_words++;
		while (*s != c && *s)
			s++;
	}
	return (num_words);
}

void	*free_words(char **s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		free(s[i]);
		s[i] = NULL;
		i++;
	}
	free(s);
	s = NULL;
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**s_arr;
	size_t	i;

	if (!s)
		return (NULL);
	s_arr = (char **)malloc((get_num_words(s, c) + 1) * sizeof(char *));
	if (!s_arr)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			s_arr[i] = ft_substr(s, 0, ft_strchr(s, c) - s);
			if (!s_arr[i])
				return (free_words(s_arr));
			i++;
		}
		while (*s != c && *s != '\0')
			s++;
	}
	s_arr[i] = NULL;
	return (s_arr);
}
