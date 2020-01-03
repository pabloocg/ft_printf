/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   puthex_printf_aux.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcuadrad <pcuadrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/23 18:52:45 by pcuadrad          #+#    #+#             */
/*   Updated: 2019/11/25 12:26:08 by pcuadrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/printf.h"

void		printf_hex(int number, t_printf **bag)
{
	if ((*bag)->conversion == 'x')
		ft_putnbr_base(number, "0123456789abcdef", bag);
	else
		ft_putnbr_base(number, "0123456789ABCDEF", bag);
}

size_t		ft_nbrhexlen(int num)
{
	size_t			size;
	unsigned int	nb;

	size = 0;
	nb = num;
	if (num == 0)
		return (1);
	while (nb > 0)
	{
		nb /= 16;
		size++;
	}
	return (size);
}
