/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzouine <mzouine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 18:01:28 by mzouine           #+#    #+#             */
/*   Updated: 2023/12/07 13:49:42 by mzouine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int	ft_printf(const char *str, ...);
int	mz_printer(const char *str, int i, va_list args);
int	mz_c_printer(int i);
int	mz_cap_hex_printer(unsigned int i);
int	mz_int_counter(int i);
int	mz_p_printer(unsigned long p);
int	mz_putnbr(int i);
int	mz_s_printer(char *p);
int	mz_u_putnbr(unsigned int i);
int	mz_x_printer(unsigned int i);
int	mz_checker(char c, int *i);

#endif