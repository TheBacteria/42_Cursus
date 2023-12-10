/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzouine <mzouine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 21:02:50 by mzouine           #+#    #+#             */
/*   Updated: 2023/12/10 15:54:14 by mzouine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

char	*get_next_line(int fd);
char	*mz_strjoin(char const *s1, char const *s2);
size_t	mz_strlen(const char *s);
int		mz_strchr(const char *s, char c);
size_t	mz_strlcpy(char *dst, char *src, size_t dstsize);
char	*mz_strdup(const char *s1);

#endif