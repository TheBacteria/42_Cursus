/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mz_int_counter.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzouine <mzouine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 16:22:35 by mzouine           #+#    #+#             */
/*   Updated: 2023/11/27 12:03:41 by mzouine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	mz_int_counter(int i)
{
	int	count;

	count = 0;
	if (i == 0)
		return (1);
	if (i < 0)
	{
		i = -i;
		count++;
	}
	while (i > 0)
	{
		i = i / 10;
		count++;
	}
	return (count);
}
