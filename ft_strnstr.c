/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaliclar <aaliclar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 16:38:18 by aaliclar          #+#    #+#             */
/*   Updated: 2024/10/18 16:45:38 by aaliclar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (*needle == '\0')
	{
		return ((char *)haystack);
	}
	i = 0;
	while (haystack[i] && i < len)
	{
		j = 0;
		while (haystack[i + j] && haystack[i + j] == needle[j] && (i + j) < len)
		{
			j++;
			if (needle[j] == '\0')
			{
				return ((char *)&haystack[i]);
			}
		}
		i++;
	}
	return (NULL);
}
//int	main(void)
//{
//	char	*s;
//	char	*f;

//	s = "sila askin atalay aliclar";
//	f = "atalay";
//	printf("%s\n%s", ft_strnstr(s, f, 25), strnstr(s, f, 25));
//}
