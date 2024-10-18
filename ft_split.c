/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaliclar <aaliclar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 16:50:42 by aaliclar          #+#    #+#             */
/*   Updated: 2024/10/18 15:40:44 by aaliclar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
int	count_words(char const *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			count++;
		while (*s && *s != c)
			s++;
	}
	return (count);
}
char	**ft_split(char const *s, char c)
{
	char	**result;
	int		i;
	int		j;
	int		len;

	if (!s)
		return (NULL);
	len = count_words(s, c);
	result = malloc(sizeof(char *) * (len + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (i < len)
	{
		while (*s == c)
			s++;
		j = 0;
		while (s[j] != c && s[j])
			j++;
		result[i++] = ft_substr(s, 0, j);
		s += j;
	}
	result[i] = NULL;
	return (result);
}
////verdiğin bir stringi ayraçla bölerek birden fazla string oluşturur.Ve bu strimgleri double pointera atar.
//int main()
//{
//	char *str = "sila askin";
//	char **res = ft_split(str, 's');
//	int i;
//	i = 0;
//	while(res[i])
//	{
//		printf("%s", res[i]);
//		i++;
//	}
//}