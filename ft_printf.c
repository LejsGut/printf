/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalkic <lsalkic@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 12:17:21 by lsalkic           #+#    #+#             */
/*   Updated: 2025/10/25 14:47:08 by lsalkic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_printf(const char *format, ...)
{
	int		i;
	char	new;

	i = 0;
	while (format[i] != '%' && format[i])
	// soll weren waherend string nicht fertig ist schreib wenn
	//% kommt und naechster letter dies und das ist mach das und dann weiter da noch nicht fertig
	{
		write(1, &format[i], 1);
		i++;
	}
	if (format[i] == '%')
		return (0);
}
int	main(void)
{
	ft_printf("Hallo Welt!\n");
	ft_printf("Dies ist ein Test ohne Prozentzeichen.\n");
	ft_printf("Hier %% sollte gestoppt werden (noch nicht implementiert).\n");
	return (0);
}
