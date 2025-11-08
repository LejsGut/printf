/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_integer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalkic <lsalkic@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 15:46:20 by lsalkic           #+#    #+#             */
/*   Updated: 2025/11/07 16:54:49 by lsalkic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	print_integer(long num)
{
	long	count;

	count = 0; // vielleicht sonderfall aber eher nicht
	if (num < 0)
	{
		num = num * -1;
		count += write(1, "-", 1);
	}
	if (num > 9)
		count += print_integer(num / 10);
	count += ft_putchar(num % 10 + '0');
	return (count);
}

// int	main(void)
// {
// 	int printed;

// 	printed = print_integer(-1);
// 	ft_putchar('\n');

// 	printed = print_integer(42);
// 	ft_putchar('\n');

// 	printed = print_integer(-12345);
// 	ft_putchar('\n');

// 	printed = print_integer(987654321);
// 	ft_putchar('\n');

// 	// Anzahl der ausgegebenen Zeichen anzeigen
// 	print_integer(printed);
// 	ft_putchar('\n');

// 	return (0);
// }