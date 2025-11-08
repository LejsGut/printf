/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalkic <lsalkic@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 14:36:02 by lsalkic           #+#    #+#             */
/*   Updated: 2025/11/08 14:41:50 by lsalkic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	int nbr;
	int count;

	nbr = 42;
	count = ft_printf("pointer    = %p\n"
						"int(d)     = %d\n"
						"int(i)     = %i\n"
						"char       = %c\n"
						"str        = %s\n"
						"str (null) = %s\n"
						"hex(low)   = %x\n"
						"hex(up)    = %X\n"
						"unsinged   = %u\n"
						"sign       = %%\n",
						&nbr,
						nbr,
						nbr,
						'c',
						"test test",
						NULL,
						nbr,
						nbr,
						(unsigned int)nbr);
	ft_printf("count = %d\n", count);
	return (0);
}