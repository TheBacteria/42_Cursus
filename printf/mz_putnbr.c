/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mz_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzouine <mzouine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 15:44:01 by mzouine           #+#    #+#             */
/*   Updated: 2023/11/27 16:45:04 by mzouine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	mz_putnbr(int i)
{
	int		n;

	n = i;
	if (i == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (10);
	}
	else if (i < 0)
	{
		write(1, "-", 1);
		i = -i;
		mz_putnbr(i);
	}
	else
	{
		if (i >= 10)
		{
			mz_putnbr(i / 10);
			mz_putnbr(i % 10);
		}
		else
			write(1, &(char){(char)(i + 48)}, 1);
	}
	return (mz_int_counter(n) - 1);
}
