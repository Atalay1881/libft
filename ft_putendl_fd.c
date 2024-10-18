/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaliclar <aaliclar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 12:10:25 by aaliclar          #+#    #+#             */
/*   Updated: 2024/10/18 19:23:45 by aaliclar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void ft_putendl_fd(char *s, int fd) {
    if (s == NULL) return;
    while (*s) {
        write(fd, s, 1);
        s++;
    }
    write(fd, "\n", 1);
}
