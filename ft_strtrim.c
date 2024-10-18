/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaliclar <aaliclar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 20:42:47 by aaliclar          #+#    #+#             */
/*   Updated: 2024/10/18 15:41:42 by aaliclar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *ft_strtrim(char const *s1, char const *set) 
{
    int i = 0;
    int len;
    char *newarray;

    while (s1[i] && ft_strchr(set, s1[i]))
        i++;
    len = ft_strlen(s1);
    while (len > i && ft_strchr(set, s1[len - 1]))
        len--;
    newarray = (char *)malloc(sizeof(char) * (len - i + 1));
    if (!newarray)
        return NULL;
    ft_memcpy(newarray, &s1[i], len - i);
    newarray[len - i] = '\0';
    return newarray;
}

//int main(void) {
//    char *s1 = "sila askin";
//    char *s2 = "sn";
//    char *t = ft_strtrim(s1, s2);

//    if (t) {
//        printf("%s\n", t);
//        free(t);
//    } else {
//        printf("Memory allocation failed.\n");
//    }
//    return 0;
//}

//#include <stdlib.h>

//char	*ft_strtrim(char const *s1, char const *set)
//{
//	int		i;
//	int		len;
//	char	*newarray;

//	i = 0;
//	while (s1[i] && ft_strchr(set, s1[i]) != 0)
//		i++;
//	len = ft_strlen(s1);
//	while ( len > i && s1[len - 1] && ft_strchr(set, s1[len - 1]) != 0)
//		len--;
//	newarray = (char *)malloc(sizeof(char) * (len - i + 1));
//    if (!newarray)
//        return NULL;
//		ft_memcpy(newarray, &s1[i], len - i);
//        newarray[len - i ] = '\0';
//	return (newarray);
//}
//int	main(void)
//{
//	char *s1 = "sila askin";
//	char *s2 = "sn";
//	char *t = ft_strtrim(s1, s2);

//	if (t)
//	{
//		printf( "%s\n", t);
//		free(t);
//	}
//	return (0);
//}