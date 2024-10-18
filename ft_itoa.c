/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaliclar <aaliclar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 15:51:28 by aaliclar          #+#    #+#             */
/*   Updated: 2024/10/18 19:20:55 by aaliclar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	length(int n)
{
	int	i;//basamak sayısı

	i = 0;
	if (n <= 0)
		i = 1;
	while (n != 0)
	{
		i++;
		n = n / 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	nmb;
	int		len;

	nmb = n;
	len = length(nmb);
	if(n < 0)
		nmb = -nmb;
	str = (char *)malloc(sizeof(char) * len + 1);
	if (!str)
		return (0);
	str[len] = '\0';
	while (--len >= 0)
	{
		str[len] = (nmb % 10) + '0';
		nmb = nmb / 10;
	}
	if(n < 0)
		str[0] = '-';
	return (str);
}
