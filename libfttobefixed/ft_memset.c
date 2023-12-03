/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzouine <mzouine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 09:43:31 by mzouine           #+#    #+#             */
/*   Updated: 2023/12/03 10:41:20 by mzouine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t size)
{
	size_t			i;
	unsigned char	*string;	

	i = 0;
	string = (unsigned char *) s;
	while (i < size)
	{
		string[i] = (unsigned char) c;
		i++;
	}
	return (s);
}
