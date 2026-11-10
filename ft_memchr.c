/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaestre <jmaestre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 15:51:46 by jmaestre          #+#    #+#             */
/*   Updated: 2026/10/02 12:06:31 by jmaestre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char		uc;
	const unsigned char	*us;
	size_t				i;

	uc = (unsigned char) c;
	us = s;
	i = 0;
	while (i < n)
	{
		if (us[i] == (unsigned char) c)
			return ((void *) &us[i]);
		i++;
	}
	return (NULL);
}
