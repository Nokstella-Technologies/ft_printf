/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gets_s_c_p.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima-ce <llima-ce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 19:01:01 by llima-ce          #+#    #+#             */
/*   Updated: 2021/10/08 16:51:29 by llima-ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_get_string(t_format *buffer)
{
	int		len;

	buffer->formated_src = ft_strdup(va_arg(buffer->args_c, char *));
	if (buffer->formated_src)
	{
		len = (int)ft_strlen(buffer->formated_src);
		pointer_flag(buffer, &len);
	}
	else
	{
		free(buffer->formated_src);
		buffer->formated_src = ft_strdup("(null)");
		len = (int)ft_strlen(buffer->formated_src);
	}
	min_width_flag(buffer, &len);
	buffer->len += len;
}

void	ft_get_char(t_format *buffer)
{
	int len;

	buffer->formated_src = ft_calloc(2, sizeof(char));
	buffer->formated_src[0] = va_arg(buffer->args_c, int);
	len = 1;
	if (*buffer->formated_src == 0)
	{
		free(buffer->formated_src);
		buffer->formated_src = ft_strdup("");
		buffer->cf_now->flag_align = FALSE;
	}
	min_width_flag(buffer, &len);
	buffer->len += len;
}

void	ft_get_adress(t_format *buffer)
{
	int		len;

	buffer->formated_src = ft_itoa_base(va_arg(buffer->args_c, size_t), HEX);
	if(buffer->formated_src == NULL)
		buffer->formated_src = ft_strdup("0");
	len = ft_strlen(buffer->formated_src);
	buffer->cf_now->flag_hashtag = TRUE;
	hastag_flag(buffer, &len);
	min_width_flag(buffer, &len);
	buffer->len += len;
}

void	ft_get_percent(t_format *buffer)
{
	buffer->formated_src = malloc(2 *sizeof(char));
	buffer->formated_src[0] = '%';
	buffer->formated_src[1] = 0;
	buffer->len += 1;
}