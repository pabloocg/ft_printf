/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strldup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcuadrad <pcuadrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 20:40:47 by pcuadrad          #+#    #+#             */
/*   Updated: 2019/11/21 12:50:04 by pcuadrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/printf.h"

char	*ft_strldup(char *format)
{
	char	*tmp;
	int		i;
	int		j;

	i = 0;
	j = 1;
	while (format[i])
	{
		if (ft_strchr(SETS, format[i]))
			break ;
		i++;
		j++;
	}
	tmp = ft_substr(format, 0, j);
	return (tmp);
}
