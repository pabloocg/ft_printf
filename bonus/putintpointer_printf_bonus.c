/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putintpointer_printf_bonus.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcuadrad <pcuadrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/24 19:22:18 by pcuadrad          #+#    #+#             */
/*   Updated: 2019/11/25 13:26:57 by pcuadrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/printf_bonus.h"

void	putintpointer_printf(t_printf **bag)
{
	*va_arg((*bag)->argv, int*) = (*bag)->size;
}
