/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhoorntj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 12:24:35 by rhoorntj          #+#    #+#             */
/*   Updated: 2019/04/30 14:28:15 by rhoorntj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;
	unsigned char	*ptr2;

	dest2 = (unsigned char*)dest;
	src2 = (unsigned char*)src;
	i = 0;
	while (i < n)
	{
		dest2[i] = src2[i];
		if (src2[i] == (unsigned char)c)
			return (&dest2[i + 1]);
		i++;
	}
	return (NULL);
}
