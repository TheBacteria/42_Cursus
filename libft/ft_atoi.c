/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzouine <mzouine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 11:29:43 by mzouine           #+#    #+#             */
/*   Updated: 2023/11/30 18:19:39 by mzouine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	str_to_int(const char *str, int i, int sign)
{
	unsigned long long	nb;
	int					count;

	nb = 0;
	count = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		count++;
		if (count == 20)
		{
			if (sign == -1)
				return (0);
			return (-1);
		}
		nb = nb * 10 + str[i] - '0';
		i++;
	}
	if (nb > LONG_MAX)
	{
		if (sign == -1)
			return (0);
		return (-1);
	}
	return ((int)nb * sign);
}

int	ft_atoi(const char *str)
{
	int		sign;
	size_t	i;

	sign = 1;
	i = 0;
	while (str[i] && (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13)))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] == '0')
		i++;
	return (str_to_int(str, i, sign));
}
