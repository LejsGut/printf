/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_number_unsigned.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalkic <lsalkic@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 14:48:11 by lsalkic           #+#    #+#             */
/*   Updated: 2025/11/07 15:03:41 by lsalkic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_print_number_unsigned(unsigned int nbr)
{
	int	writtendigits;

	writtendigits = 0;
	if (nbr > 9)
		writtendigits += ft_print_number_unsigned(nbr / 10);
	writtendigits += ft_putchar(nbr % 10 + 48);
	return (writtendigits);
}

// int	main(void)
// {
// 	printf("\n%d\n", ft_print_number_unsigned(876876876867867));
// }
