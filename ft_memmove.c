/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaestre <jmaestre@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 19:16:28 by jmaestre          #+#    #+#             */
/*   Updated: 2026/09/26 20:23:16 by jmaestre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*ndest;
	const unsigned char	*nsrc;

	if (src > dest)
	{
		ft_memcpy(dest, src, n);
		return (dest);
	}
	ndest = dest;
	nsrc = src;
	while (n--)
	{
		ndest[n] = nsrc[n];
	}
	return (dest);
}
