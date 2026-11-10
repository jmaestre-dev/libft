/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaestre <jmaestre@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 18:47:52 by jmaestre          #+#    #+#             */
/*   Updated: 2026/09/24 19:55:38 by jmaestre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*ndest;
	const unsigned char	*nsrc;
	size_t				i;

	ndest = dest;
	nsrc = src;
	i = 0;
	while (i < n)
	{
		ndest[i] = (unsigned char) nsrc[i];
		i++;
	}
	return (dest);
}
