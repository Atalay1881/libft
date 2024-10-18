/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaliclar <aaliclar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 12:32:10 by aaliclar          #+#    #+#             */
/*   Updated: 2024/10/18 19:20:02 by aaliclar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char *ptr;
	ptr = (char *)malloc(count * size );
	if(ptr == NULL)
		return NULL;
	ft_bzero(ptr , count * size);
	return ptr;
}
