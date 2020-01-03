/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putspaces_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcuadrad <pcuadrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 17:34:35 by pcuadrad          #+#    #+#             */
/*   Updated: 2019/11/26 11:56:04 by pcuadrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/printf_bonus.h"

void	putspaces(int nspaces)
{
	if (nspaces > 0)
		while (nspaces)
		{
			ft_putchar(' ');
			nspaces--;
		}
}
