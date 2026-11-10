/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaestre <jmaestre@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 13:26:24 by jmaestre          #+#    #+#             */
/*   Updated: 2026/10/21 15:22:22 by jmaestre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ns;
	size_t	s1_len;
	size_t	s2_len;

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen((char *)s1);
	s2_len = ft_strlen((char *)s2);
	ns = malloc((s1_len + s2_len + 1) * sizeof(char));
	if (!ns)
		return (NULL);
	ft_strlcpy(ns, s1, s1_len + 1);
	ft_strlcat(ns, s2, s1_len + s2_len + 1);
	return (ns);
}
