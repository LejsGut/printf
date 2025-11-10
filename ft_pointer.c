/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalkic <lsalkic@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 14:29:42 by lsalkic           #+#    #+#             */
/*   Updated: 2025/11/10 10:49:41 by lsalkic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex_lower2(unsigned long long num, char *base)
{
	int	result;

	result = 0;
	if (num >= 16)
		result += ft_puthex_lower2(num / 16, base);
	ft_putchar(base[num % 16]);
	return (result + 1);
}

int	ft_pointer(char *base, unsigned long long ptr)
{
	size_t	new;
	int		result;

	result = 0;
	new = (size_t)ptr;
	if (!ptr)
		return (write(1, "(nil)", 5));
	result += write(1, "0x", 2);
	if (new >= 16)
		result += ft_puthex_lower2(new / 16, base);
	ft_putchar(base[new % 16]);
	return (result + 1);
}

// int	main(void)
// {
// 	long	x;
// 	long	*p;

// 	x = LONG_MAX;
// 	p = &x;
// 	printf("Adresse von x: %p\n", (void *)p);
// 	printf("ft_pointer Rückgabewert: %d\n", ft_pointer("0123456789abcdef", p));
// 	ft_pointer("0123456789abcdef", p);
// 	return (0);
// }
