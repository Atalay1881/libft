/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaliclar <aaliclar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 11:59:14 by aaliclar          #+#    #+#             */
/*   Updated: 2024/10/18 15:40:38 by aaliclar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void ft_putstr_fd(char *s, int fd) {
    if (s == NULL) return;
    while (*s) 
	{
        write(fd, s, 1);
        s++;
    }
}
//int main() {
//    ft_putstr_fd("Kofteci yusuf adamdır!", 1);
//	ft_putstr_fd("\n", 1); 
//    return 0;
//}
////ft_putstr_fd: Bir stringi yazdırır, ancak yeni bir satır eklemez.
////ft_putendl_fd: Bir stringi yazdırır ve ardından yeni bir satır ekler.
