/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaestre <jmaestre@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 10:20:39 by jmaestre          #+#    #+#             */
/*   Updated: 2026/10/20 19:49:05 by jmaestre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*ns;
	size_t	size;

	size = ft_strlen((char *) s) + 1;
	ns = (char *)malloc((size) * sizeof(char));
	if (ns != NULL)
		ns = ft_memcpy(ns, s, size);
	return (ns);
}
