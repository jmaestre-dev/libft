/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaestre <jmaestre@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 19:02:53 by jmaestre          #+#    #+#             */
/*   Updated: 2026/10/23 13:17:14 by jmaestre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isspace(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\f')
			i++;
		else if (str[i] == '\n' || str[i] == '\r')
			i++;
		else if (str[i] == '\t' || str[i] == '\v')
			i++;
		else
			return (i);
	}
	return (i);
}

int	ft_atoi(const char *nptr)
{
	int	i;
	int	res;
	int	neg;

	res = 0;
	i = ft_isspace((char *) nptr);
	neg = 1;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			neg = -1;
		i++;
	}
	while (nptr[i] != '\0' && (nptr[i] >= '0' && nptr[i] <= '9'))
	{
		res = res * 10 + (nptr[i] - '0');
		i++;
	}
	res *= neg;
	return (res);
}
