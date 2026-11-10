/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaestre <jmaestre@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 20:05:53 by jmaestre          #+#    #+#             */
/*   Updated: 2026/10/20 19:39:34 by jmaestre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	max;
	size_t	total;
	void	*ptr;

	max = (size_t) -1;
	if (nmemb == 0 || size == 0)
		return (malloc(0));
	if (max / nmemb < size)
		return (NULL);
	total = nmemb * size;
	ptr = (void *) malloc(total);
	if (ptr != NULL)
		ft_memset(ptr, 0, total);
	return (ptr);
}
