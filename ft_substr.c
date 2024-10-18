/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaliclar <aaliclar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 13:29:41 by aaliclar          #+#    #+#             */
/*   Updated: 2024/10/18 16:43:25 by aaliclar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	j;

	if (s == NULL)
		return (NULL);
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	str = (char *)malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (i >= start && j < len)
		{
			str[j] = s[i];
			j++;
		}
		i++;
	}
	str[j] = 0;
	return (str);
}






//#include <stdio.h>


//int	main(void)
//{
//	char	*source;
//	char	*result;

//	source = "merhaba";
//	result = ft_substr(source, 5, 734);
//	if (result)
//	{
//		printf("Alt Dizi: %s\n", result);
//		free(result); // Belleği serbest bırak
//	}
//	else
//	{
//		printf("Alt dizi alınamadı.\n");
//	}
//	return (0);
//}
