/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalkic <lsalkic@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 12:17:21 by lsalkic           #+#    #+#             */
/*   Updated: 2025/11/06 16:44:23 by lsalkic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./42Libft/libft.h"

char	ft_c(const char *format, int i, va_list args)
{
	char	c;

	if (format[++i] == 'c')
		c = va_arg(args, int);
	*ft_itoa(c);
	return (c);
}

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

int	main(void)
{
	printf("Hallo Welt!\n");
	ft_printf("Hallo Welt!\n");
	printf("hallo ich bin lukas %c\n", 'a');
	ft_printf("hallo ich bin lukas %c\n", 'a');
	return (0);
}
