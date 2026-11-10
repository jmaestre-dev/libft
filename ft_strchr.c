/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaestre <jmaestre@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 13:36:23 by jmaestre          #+#    #+#             */
/*   Updated: 2026/10/01 13:57:02 by jmaestre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	nc;

	nc = (char) c;
	while (*s != nc)
	{
		if (*s == '\0')
			return (NULL);
		s++;
	}
	return ((char *) s);
}
