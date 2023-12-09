/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzouine <mzouine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 11:24:58 by mzouine           #+#    #+#             */
/*   Updated: 2023/12/09 21:52:46 by mzouine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*mz_dup_clean(char **ptr_to_final)
{
	char	*s;

	s = mz_strdup(*ptr_to_final);
	free(*ptr_to_final);
	*ptr_to_final = NULL;
	return (s);
}

static char	*mz_make(char **ptr_to_final)
{
	char	*s;
	char	*tmp;
	int		nl_index;

	if (!*ptr_to_final)
		return (NULL);
	if (**ptr_to_final == '\0')
	{
		free(*ptr_to_final);
		return (*ptr_to_final = NULL, NULL);
	}
	nl_index = mz_strchr(*ptr_to_final, '\n');
	if (nl_index == -1)
		return (mz_dup_clean(ptr_to_final));
	else
	{
		s = malloc(nl_index + 2);
		if (!s)
			return (NULL);
		mz_strlcpy(s, *ptr_to_final, nl_index + 2);
		tmp = *ptr_to_final;
		*ptr_to_final = mz_strdup(*ptr_to_final + nl_index + 1);
		free(tmp);
	}
	return (s);
}

static char	*mz_append(int fd, char *buffer, char **ptr_to_final)
{
	ssize_t	n;
	char	*tmp;

	n = read(fd, buffer, BUFFER_SIZE);
	while (n > 0)
	{
		buffer[n] = '\0';
		tmp = *ptr_to_final;
		*ptr_to_final = mz_strjoin(tmp, buffer);
		free(tmp);
		tmp = NULL;
		if (mz_strchr(*ptr_to_final, '\n') != -1)
			break ;
		n = read(fd, buffer, BUFFER_SIZE);
	}
	if (n == -1)
	{
		free(*ptr_to_final);
		*ptr_to_final = NULL;
		return (NULL);
	}
	return (mz_make(ptr_to_final));
}

char	*get_next_line(int fd)
{
	static char	*final;
	char		*buffer;
	char		*line;

	if (fd < 0 || fd >= OPEN_MAX || BUFFER_SIZE <= 0)
		return (NULL);
	buffer = malloc(BUFFER_SIZE + 1);
	if (!buffer)
		return (NULL);
	line = mz_append(fd, buffer, &final);
	free(buffer);
	return (line);
}