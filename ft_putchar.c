/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalkic <lsalkic@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 12:10:50 by lsalkic           #+#    #+#             */
/*   Updated: 2025/11/06 13:10:00 by lsalkic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putchar(int c)
{
	unsigned char	a;

	a = (unsigned char)c;
	write(1, &a, 1);
	return (1);
}

// int	main(void)
// {
// 	ft_putchar(48);
// }
