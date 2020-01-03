/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_conversion.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcuadrad <pcuadrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 11:59:49 by pcuadrad          #+#    #+#             */
/*   Updated: 2019/11/20 12:13:55 by pcuadrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/printf.h"

void	check_conversion(t_printf **bag)
{
	int		i;

	i = 0;
	(*bag)->conversion = (*bag)->summary[i];
}
