/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaestre <jmaestre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 14:00:15 by jmaestre          #+#    #+#             */
/*   Updated: 2026/10/02 12:18:25 by jmaestre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	nc;
	size_t	i;

	nc = (char) c;
	i = ft_strlen((char *) s);
	s = s + i;
	while (*s != nc)
	{
		if (i == 0)
			return (NULL);
		s--;
		i--;
	}
	return ((char *) s);
}
