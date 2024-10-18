/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaliclar <aaliclar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 02:16:56 by aaliclar          #+#    #+#             */
/*   Updated: 2024/10/12 14:29:45 by aaliclar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*new;
	int		i;
	int		size;

	size = ft_strlen(s1);
	new = (char *)malloc(sizeof(char) * size + 1);
	if (!new)
		return (NULL);
	i = 0;
	while (i < size)
	{
		new[i] = s1[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}
