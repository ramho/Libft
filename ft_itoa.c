/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhoorntj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/24 19:04:23 by rhoorntj          #+#    #+#             */
/*   Updated: 2019/05/02 18:16:44 by rhoorntj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_numlen(int n)
{
	int		i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		i++;
		n = -n;
	}
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char		*ft_itoa(int n)
{
	int		len;
	char	*s;
	int		i;
	int		j;

	i = -1;
	j = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = ft_numlen(n);
	if (!(s = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	if (n < 0)
	{
		s[0] = '-';
		n = -n;
		j = 1;
	}
	while ((++i + j) < len)
	{
		s[len - i - 1] = (n % 10) + '0';
		n /= 10;
	}
	s[len] = '\0';
	return (s);
}
