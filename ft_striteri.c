/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaliclar <aaliclar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 16:16:37 by aaliclar          #+#    #+#             */
/*   Updated: 2024/10/18 15:40:52 by aaliclar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
void ft_deneme(unsigned int a, char *s)
{
	a = 0;
	s[0] -= 32;
}

void	ft_striteri(char *s, void (*f)(unsigned int,char*)) 
{
	int	i;

	if (!s)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		(*f)(i, &s[i]);
		i++;
	}
	s[i] = '\0';
}
////bir karakter dizisi üzerinde her bir karakter için 
////bir işlevi uygulamak için kullanılır.

//int main()
//{
//	char str[] = "fatih";
//	ft_striteri(str, ft_deneme);
//	printf("%s\n", str);
	
	
//}

