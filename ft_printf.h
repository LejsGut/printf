/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalkic <lsalkic@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 15:23:28 by lsalkic           #+#    #+#             */
/*   Updated: 2025/11/08 16:00:11 by lsalkic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>

int	ft_puthex_lower(unsigned int num, char *base);
int	ft_putstr(char *c);
int	ft_pointer(char *base, void *ptr);
int	ft_print_number_unsigned(unsigned int nbr);
int	ft_puthex_upper(unsigned int num, char *base);
int	ft_putchar(int c);
int	ft_print_integer(long num);
int	ft_printf(const char *format, ...);

#endif