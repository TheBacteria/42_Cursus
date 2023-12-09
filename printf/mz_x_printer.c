/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mz_x_printer.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzouine <mzouine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 16:34:18 by mzouine           #+#    #+#             */
/*   Updated: 2023/11/27 16:47:46 by mzouine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	mz_x_printer(unsigned int i)
{
	char	c;
	int		count;

	count = 0;
	if (i >= 16)
		count += mz_x_printer(i / 16);
	if (i % 16 <= 9)
		c = i % 16 + '0';
	else
		c = i % 16 - 10 + 'a';
	write(1, &c, 1);
	count++;
	return (count);
}
