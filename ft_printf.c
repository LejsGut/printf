/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalkic <lsalkic@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 12:17:21 by lsalkic           #+#    #+#             */
/*   Updated: 2025/11/08 12:09:13 by lsalkic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_printf(const char *format, ...)
{
	int		i;
	int		count;
	char	new;
	va_list	args;

	va_start(args, format);
	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 'c')
				count = ft_c(format, i, args);
		}
		else
			write(1, &format[i], 1);
		i++;
	}
	return (i);
}
int	after_percent(char *format, va_list *args)
{
	if (*format == 'c')
		return (ft_putchar(va_arg(*args, int)));
	else if (*format == 's')
		return (ft_putstr(va_arg(*args, char *)));
	else if (format == 'p')
		return (ft_pointer("0123456789abcdef", va_arg(*args, void *)));
	else if (format == 'd' || format == 'i')
		return (ft_print_integer(va_arg(*args, long)));
	else if (format == 'u')
		return (ft_print_number_unsigned(va_arg(*args, unsigned int)));
	else if (format == 'x')
		return (ft_puthex_lower(va_arg(*args, unsigned int),
				"0123456789abcdef"));
	else if (format == 'X')
		return (ft_puthex_upper(va_arg(*args, unsigned int),
				"0123456789abcdef"));
	else if (format == '%')
		return (ft_putchar('%'));
	return (0);
}

int	main(void)
{
	printf("Hallo Welt!\n");
	ft_printf("Hallo Welt!\n");
	printf("hallo ich bin lukas %c\n", 'a');
	ft_printf("hallo ich bin lukas %c\n", 'a');
	return (0);
}
