/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putzeros_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcuadrad <pcuadrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 14:15:23 by pcuadrad          #+#    #+#             */
/*   Updated: 2019/11/26 12:09:52 by pcuadrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/printf_bonus.h"

void	putzeros(int nzeros)
{
	if (nzeros > 0)
		while (nzeros)
		{
			ft_putchar('0');
			nzeros--;
		}
}
