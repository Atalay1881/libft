/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaliclar <aaliclar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 12:23:13 by aaliclar          #+#    #+#             */
/*   Updated: 2024/10/18 19:24:19 by aaliclar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void ft_putchar_fd(char c, int fd) {
    write(fd, &c, 1);
}

void ft_putnbr_fd(int n, int fd) {
    long nb;

    nb = n;
    if (nb < 0) {
        write(fd, "-", 1);
        nb *= -1;
    }
    if (nb > 9) {
        ft_putnbr_fd(nb / 10, fd);
        ft_putchar_fd((nb % 10) + '0', fd);
    } else {
        ft_putchar_fd(nb + '0', fd);
    }
}
