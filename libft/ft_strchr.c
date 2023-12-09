/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzouine <mzouine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 17:19:28 by mzouine           #+#    #+#             */
/*   Updated: 2023/11/06 14:06:51 by mzouine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;
	char			character;

	character = (char) c;
	i = 0;
	while (s[i])
	{
		if (s[i] == character)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == character)
		return ((char *)&s[i]);
	return (NULL);
}
