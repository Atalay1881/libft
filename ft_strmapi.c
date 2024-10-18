/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaliclar <aaliclar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 16:16:19 by aaliclar          #+#    #+#             */
/*   Updated: 2024/10/14 16:53:04 by aaliclar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	length;
	char			*res;

	if (!s)
		return (NULL);
	length = ft_strlen(s);
	res = malloc(length * sizeof(char) + 1);
	if (!res)
		return (NULL);
	i = 0;
	while (i < length)
	{
		res[i] = (*f)(i, s[i]);
		i++;
	}
	res[i] = '\0';// C-string olarak düzgün bir şekilde sonlandırılması için null ekliyoruz
	return (res);
}
//ft_strmapi, her karakterin üzerinde işlem yapıp yeni bir sonuç oluşturmak için uygundur.
//ft_striteri, dizinin mevcut durumunu değiştirmek için kullanılır.
