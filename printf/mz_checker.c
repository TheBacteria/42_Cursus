/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mz_checker.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzouine <mzouine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 13:36:23 by mzouine           #+#    #+#             */
/*   Updated: 2023/12/09 18:35:22 by mzouine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	mz_checker(char c, int *i)
{
	if (c == 'c')
		return (1);
	else if (c == 's')
		return (1);
	else if (c == 'p')
		return (1);
	else if (c == 'd' || c == 'i')
		return (1);
	else if (c == 'u')
		return (1);
	else if (c == 'x')
		return (1);
	else if (c == 'X')
		return (1);
	else if (c == '%')
		return (1);
	else if (c == '\0')
		return (1);
	else
	{
		(*i)++;
		return (-1);
	}
}
