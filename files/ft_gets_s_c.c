/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gets_s_c.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima-ce <llima-ce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 19:01:01 by llima-ce          #+#    #+#             */
/*   Updated: 2021/10/07 09:26:00 by llima-ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"



void	ft_get_string(t_format *buffer)
{
	int		len;

	buffer->formated_src = ft_strdup(va_arg(buffer->args_c, char *));
	if (!buffer->formated_src)
	{
		buffer->formated_src = ft_strdup("(null)");
		return ;
	}
	len = (int)ft_strlen(buffer->formated_src);
	pointer_flag(buffer, &len);
	min_width_flag(buffer, &len);
	buffer->len += len;
}

void	ft_get_char(t_format *buffer)
{
	int len;

	buffer->formated_src = ft_calloc(2, sizeof(char));
	*buffer->formated_src = va_arg(buffer->args_c, int);
	if (!buffer->formated_src)
	{
		free(buffer->formated_src);
		buffer->formated_src = ft_strdup("(null)");
		return ;
	}
	len = 1;
	min_width_flag(buffer, &len);
	buffer->len += len;
}
