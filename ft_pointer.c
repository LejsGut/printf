/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalkic <lsalkic@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 14:29:42 by lsalkic           #+#    #+#             */
/*   Updated: 2025/11/08 16:01:25 by lsalkic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pointer(char *base, void *ptr)
{
	size_t	new;
	int		result;

	result = 0;
	new = (size_t)ptr;
	if (!ptr)
		return (write(1, "(nil)", 5));
	result += write(1, "0x", 2);
	if (new >= 16)
		result += ft_puthex_lower(new / 16, base);
	ft_putchar(base[new % 16]);
	return (result + 1);
}

// int	main(void)
// {
// 	int	x;
// 	int	*p;

// 	x = 42;
// 	p = &x;
// 	printf("Adresse von x: %p\n", (void *)p);
// 	printf("ft_pointer Rückgabewert: %d\n", ft_pointer("0123456789abcdef", p));
// 	ft_pointer("0123456789abcdef", p);
// 	return (0);
// }
