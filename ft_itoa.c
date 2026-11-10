/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaestre <jmaestre@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 13:57:07 by jmaestre          #+#    #+#             */
/*   Updated: 2026/10/22 18:12:35 by jmaestre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	get_num_char(long n)
{
	size_t	size;

	size = 0;
	if (n == 0)
		size = 1;
	else
	{
		if (n < 0)
		{
			size = 1;
			n = -n;
		}
		while (n > 0)
		{
			n = n / 10;
			size++;
		}
	}
	return (size);
}

void	fill_char(char *str, long n, size_t size)
{
	int	is_neg;

	is_neg = 0;
	if (n < 0)
	{
		n = -n;
		is_neg = 1;
	}
	while (size > 0)
	{
		str[size - 1] = (n % 10) + '0';
		n = n / 10;
		size--;
	}
	if (is_neg)
		str[0] = '-';
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	size;
	long	nb;

	nb = n;
	size = get_num_char(nb);
	str = (char *)malloc(size + 1 * sizeof(char));
	if (!str)
		return (NULL);
	str[size] = '\0';
	fill_char(str, nb, size);
	return (str);
}
