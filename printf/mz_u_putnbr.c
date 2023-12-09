/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mz_u_putnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzouine <mzouine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 16:21:34 by mzouine           #+#    #+#             */
/*   Updated: 2023/11/27 12:06:34 by mzouine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	mz_u_putnbr(unsigned int i)
{
	char	c;
	int		count;

	if (i == 0)
	{
		write(1, "0", 1);
		return (0);
	}
	count = 0;
	if (i >= 10)
	{
		mz_u_putnbr(i / 10);
		mz_u_putnbr(i % 10);
	}
	else
	{
		c = i + 48;
		write(1, &c, 1);
	}
	while (i > 0)
	{
		i = i / 10;
		count++;
	}
	return (count - 1);
}
