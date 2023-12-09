/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mz_cap_hex_printer.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzouine <mzouine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 17:25:56 by mzouine           #+#    #+#             */
/*   Updated: 2023/11/27 16:43:27 by mzouine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	mz_cap_hex_printer(unsigned int i)
{
	char	c;
	int		count;

	count = 0;
	if (i >= 16)
		count += mz_cap_hex_printer(i / 16);
	if (i % 16 <= 9)
		c = i % 16 + '0';
	else
		c = i % 16 - 10 + 'A';
	write(1, &c, 1);
	count++;
	return (count);
}
