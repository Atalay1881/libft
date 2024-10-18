/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaliclar <aaliclar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 14:55:02 by aaliclar          #+#    #+#             */
/*   Updated: 2024/10/18 15:40:56 by aaliclar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdlib.h>
#include <string.h>

char *ft_strjoin(char const *s1, char const *s2) 
{
    char *joined_str;
    size_t len1;
    size_t len2;

    if (!s1 || !s2) return NULL;

    len1 = strlen(s1);
    len2 = strlen(s2);

    joined_str = (char *)malloc(len1 + len2 + 1);
    if (!joined_str) return NULL;

    strcpy(joined_str, s1);//yeni diziye kopyalar
    strcat(joined_str, s2);//kopyalanan dizenin sonuna eklenir

    return joined_str; 
}
//#include <stdio.h>

//int main() {
//    char *str1 = "Merhaba, ";
//    char *str2 = "Dünya!";
//    char *result = ft_strjoin(str1, str2);

//    if (result) {
//        printf("Birleştirilmiş Dizi: %s\n", result);
//        free(result);
//    } else {
//        printf("Birleştirme başarısız.\n");
//    }
//    return 0;
//}
