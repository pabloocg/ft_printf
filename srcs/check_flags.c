/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_flags.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcuadrad <pcuadrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 14:01:55 by pcuadrad          #+#    #+#             */
/*   Updated: 2019/11/25 12:16:53 by pcuadrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/printf.h"

void	check_flags(t_printf **bag)
{
	int		i;
	int		cont;

	i = -1;
	cont = 0;
	while ((*bag)->summary[++i] && (*bag)->summary[i] != '.')
	{
		if ((*bag)->summary[i] == '-')
		{
			(*bag)->minus = 1;
			cont++;
		}
		if ((*bag)->summary[i] == '0' && ((!ft_isdigit((*bag)->summary[i - 1])
			&& (*bag)->summary[i - 1] != '.') || (*bag)->summary[i - 1] == '0'))
		{
			(*bag)->zero = 1;
			cont++;
		}
	}
	if (cont != 0)
		(*bag)->summary = (*bag)->summary + cont;
}
