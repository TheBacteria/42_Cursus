/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mz_printer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzouine <mzouine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 11:37:42 by mzouine           #+#    #+#             */
/*   Updated: 2023/12/09 18:44:40 by mzouine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	mz_printer(const char *str, int i, va_list args)
{
	if (str[i + 1] == 'c')
		return (mz_c_printer(va_arg(args, int)));
	else if (str[i + 1] == 's')
		return (mz_s_printer(va_arg(args, char *)));
	else if (str[i + 1] == 'p')
		return (mz_p_printer(va_arg(args, unsigned long)));
	else if (str[i + 1] == 'd' || str[i + 1] == 'i')
		return (mz_putnbr(va_arg(args, int)));
	else if (str[i + 1] == 'u')
		return (mz_u_putnbr(va_arg(args, unsigned int)));
	else if (str[i + 1] == 'x')
		return (mz_x_printer(va_arg(args, unsigned int)) - 1);
	else if (str[i + 1] == 'X')
		return (mz_cap_hex_printer(va_arg(args, unsigned int)) - 1);
	else if (str[i + 1] == '%')
		return (mz_c_printer('%'));
	else if (str[i + 1] == '\0')
		return (-1);
	else
		return (-1);
}
