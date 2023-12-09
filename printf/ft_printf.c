/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzouine <mzouine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 18:28:13 by mzouine           #+#    #+#             */
/*   Updated: 2023/12/09 18:33:41 by mzouine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		count;

	if (write(1, "", 0) == -1)
		return (-1);
	i = 0;
	count = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%' && mz_checker(str[i + 1], &i) == 1)
		{
			if (str[i + 1] == '\0')
				break ;
			count += mz_printer(str, i, args);
			i++;
		}
		else
			write(1, &str[i], 1);
		i++;
		count++;
	}
	va_end (args);
	return (count);
}
