/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaliclar <aaliclar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 15:41:33 by aaliclar          #+#    #+#             */
/*   Updated: 2024/10/18 19:22:33 by aaliclar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	if(!dst && !src)
		return NULL;
	else if(dst < src)
		ft_memcpy(dst, src, n);
	else if(src < dst)
	{
		while(n--)
			*((unsigned char *)(dst + n)) = *((unsigned char *)(src + n));
	}
	return(dst);
}
