/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzouine <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:07:42 by mzouine           #+#    #+#             */
/*   Updated: 2023/11/06 14:15:29 by mzouine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;
	char			character;
	int				t_or_f;
	unsigned int	n;

	character = (char) c;
	i = 0;
	while (s[i])
	{
		if (s[i] == character)
		{
			n = i;
			t_or_f = 1;
		}
		i++;
	}
	if (s[i] == character)
	{
		n = i;
		t_or_f = 1;
	}
	if (t_or_f == 1)
		return ((char *)&s[n]);
	return (NULL);
}
