/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mz_p_printer.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzouine <mzouine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 17:42:49 by mzouine           #+#    #+#             */
/*   Updated: 2023/11/27 16:44:01 by mzouine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	mz_pointer_printer(unsigned long i, int *count)
{
	if (i >= 16)
	{
		mz_pointer_printer(i / 16, count);
		mz_pointer_printer(i % 16, count);
	}
	else
	{
		if (i <= 9)
			write(1, &(char){(char)(i + '0')}, 1);
		else
			write(1, &(char){(char)(i - 10 + 'a')}, 1);
		(*count)++;
	}
}

int	mz_p_printer(unsigned long p)
{
	int	count;

	count = 1;
	write(1, "0x", 2);
	if (!p)
	{
		write(1, "0", 1);
		return (2);
	}
	mz_pointer_printer(p, &count);
	return (count);
}
