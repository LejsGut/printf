/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_upper.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalkic <lsalkic@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 13:20:41 by lsalkic           #+#    #+#             */
/*   Updated: 2025/11/08 11:38:25 by lsalkic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_puthex_upper(unsigned int num, char *base)
{
	int	result;

	result = 0;
	if (num >= 16)
		result += ft_puthex_upper(num / 16, base);
	ft_putchar(base[num % 16]);
	return (result + 1);
}
// int	main(void)
// {
// 	ft_puthex_upper(56789, "0123456789abcdef");
// }