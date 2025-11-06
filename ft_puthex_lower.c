/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_lower.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalkic <lsalkic@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 12:24:37 by lsalkic           #+#    #+#             */
/*   Updated: 2025/11/06 13:18:09 by lsalkic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_puthex_lower(unsigned int num, char *base)
{
	int	result;

	result = 0;
	if (num >= 16)
		result += ft_puthex_lower(num / 16, base);
	ft_putchar(base[num % 16]);
	return (result + 1);
}

int	main(void)
{
	ft_puthex_lower(56789, "0123456789abcdef");
	ft_putchar('\n');
	return (0);
}
