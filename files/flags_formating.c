/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags_formating.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima-ce <llima-ce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 09:19:14 by llima-ce          #+#    #+#             */
/*   Updated: 2021/10/07 09:28:15 by llima-ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	pointer_flag(t_format *buffer, int *len)
{
	if (buffer->cf_now->flag_pointer >= *len)
	{
		if(buffer->cf_now->conversion == 'f')
		{

		}
		*len = buffer->cf_now->flag_pointer;
		buffer->formated_src[*len] = 0;
	}
}

void	min_width_flag(t_format *buffer, int *len)
{
	char *tmp;

	if (buffer->cf_now->min_width > *len)
	{
		tmp = malloc(buffer->cf_now->min_width + 1 *sizeof(char));
		tmp[buffer->cf_now->min_width] = 0;
		ft_memset(tmp, ' ', buffer->cf_now->min_width);
		if (buffer->cf_now->flag_align == true)
			ft_memcpy(tmp, buffer->formated_src , *len);
		else
			ft_memcpy(&tmp[buffer->cf_now->min_width - *len], 
				buffer->formated_src , *len);
		free(buffer->formated_src);
		buffer->formated_src = tmp;
		*len = buffer->cf_now->min_width;
	}
}