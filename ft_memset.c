/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaestre <jmaestre@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 18:04:16 by jmaestre          #+#    #+#             */
/*   Updated: 2026/09/24 17:53:02 by jmaestre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int c, size_t n)
{
	unsigned char	*nptr;
	unsigned char	nc;
	size_t			i;

	nptr = ptr;
	nc = (unsigned char) c;
	i = 0;
	while (i < n)
	{
		nptr[i] = nc;
		i++;
	}
	return (ptr);
}
