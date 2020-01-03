/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reinitialize_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcuadrad <pcuadrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 13:52:13 by pcuadrad          #+#    #+#             */
/*   Updated: 2019/11/26 10:48:23 by pcuadrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/printf_bonus.h"

/*
**	Funcion que reiniciara las flags.
**	Cada vez que encontremos un porcentaje se volveran a poner los valores a 0.
*/

void		reinitialize(t_printf **bag)
{
	(*bag)->minus = 0;
	(*bag)->zero = 0;
	(*bag)->plus = 0;
	(*bag)->hash = 0;
	(*bag)->space = 0;
	(*bag)->width = 0;
	(*bag)->precision = -1;
	(*bag)->mask = 'x';
}
