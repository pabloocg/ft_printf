/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   executer.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcuadrad <pcuadrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 13:58:49 by pcuadrad          #+#    #+#             */
/*   Updated: 2019/11/23 19:19:22 by pcuadrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/printf.h"

void	executer(t_printf **bag)
{
	if ((*bag)->conversion == 's')
		putstr_printf(bag);
	else if ((*bag)->conversion == 'c')
		putchar_printf(bag);
	else if ((*bag)->conversion == 'd' || (*bag)->conversion == 'i')
		putnbr_printf(bag);
	else if ((*bag)->conversion == 'u')
		putunsigned_printf(bag);
	else if ((*bag)->conversion == 'x' || (*bag)->conversion == 'X')
		puthex_printf(bag);
	else if ((*bag)->conversion == 'p')
		putmemory_printf(bag);
	else if ((*bag)->conversion == '%')
		putpercent_printf(bag);
}
