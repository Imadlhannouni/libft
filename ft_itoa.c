/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilhannou <ilhannou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 15:18:26 by ilhannou          #+#    #+#             */
/*   Updated: 2024/11/08 15:26:45 by ilhannou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_num_len(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static char	*int_min(int n)
{
	char	*s;

	if (n == -2147483648)
	{
		s = malloc(12);
		if (!s)
			return (NULL);
		ft_strlcpy(s, "-2147483648", 12);
	}
	return (s);
}

char	*ft_itoa(int n)
{
	char	*s;
	int		len;
	long	nb;

	nb = n;
	if (nb == -2147483648)
		return (int_min(nb));
	len = ft_num_len(nb);
	s = malloc(len + 1);
	if (!s)
		return (NULL);
	s[len--] = '\0';
	if (n < 0)
	{
		s[0] = '-';
		nb = -nb;
	}
	if (n == 0)
		s[0] = '0';
	while (nb > 0)
	{
		s[len--] = (nb % 10) + '0';
		nb /= 10;
	}
	return (s);
}
