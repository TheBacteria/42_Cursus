/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzouine <mzouine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 21:19:31 by mzouine           #+#    #+#             */
/*   Updated: 2023/12/02 17:02:52 by mzouine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	mz_int_counter(int n)
{
	int	i;
	int	counter;

	counter = 0;
	i = n;
	if (n <= 0)
	{
		counter = 1;
		i = -n;
	}
	while (i > 0)
	{
		counter++;
		i = i / 10;
	}
	return (counter);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*str;
	int		sign;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	sign = 0;
	len = mz_int_counter(n);
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	if (n < 0)
	{
		n = -n;
		sign = -1;
	}
	str[len] = '\0';
	while (len > 0)
	{
		str[--len] = n % 10 + 48;
		n = n / 10;
	}
	if (sign == -1)
		str[0] = '-';
	return (str);
}
