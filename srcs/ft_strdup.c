/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcuadrad <pcuadrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 12:05:09 by pcuadrad          #+#    #+#             */
/*   Updated: 2019/11/20 20:58:32 by pcuadrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/printf.h"

char	*ft_strdup(const char *src)
{
	char *dst;

	if (!(dst = (char*)malloc(sizeof(char) * (ft_strlen(src) + 1))))
		return (NULL);
	ft_strcpy(dst, src);
	return (dst);
}
