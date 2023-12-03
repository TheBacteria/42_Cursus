/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzouine <mzouine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 15:08:01 by mzouine           #+#    #+#             */
/*   Updated: 2023/11/22 14:19:48 by mzouine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	mz_start(char const *s1, char const *set)
{
	unsigned int	i;
	unsigned int	j;
	int				torf;

	i = 0;
	torf = 1;
	while (s1[i] && torf == 1)
	{
		j = 0;
		torf = 0;
		while (set[j] && torf == 0)
		{
			if (s1[i] == set[j])
				torf = 1;
			j++;
		}
		i++;
	}
	return (--i);
}

static unsigned int	mz_end(char const *s1, char const *set)
{
	unsigned int	i;
	unsigned int	j;
	int				torf;

	i = ft_strlen(s1) - 1;
	torf = 1;
	while (i > 0 && torf == 1)
	{
		j = 0;
		torf = 0;
		while (set[j] && torf == 0)
		{
			if (s1[i] == set[j])
				torf = 1;
			j++;
		}
		i--;
	}
	return (i + 2);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	start;
	unsigned int	end;
	char			*final;

	if (!s1 || !set)
		return (NULL);
	if (ft_strlen(s1) == 0)
		return (ft_strdup(""));
	start = mz_start(s1, set);
	end = mz_end(s1, set);
	if (start >= end)
		return (ft_strdup(""));
	final = malloc(end - start + 1);
	if (!final)
		return (NULL);
	ft_strlcpy(final, &s1[start], end - start + 1);
	return (final);
}
