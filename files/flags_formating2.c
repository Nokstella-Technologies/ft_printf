/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags_formating2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima-ce <llima-ce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 14:04:12 by llima-ce          #+#    #+#             */
/*   Updated: 2021/10/08 13:29:28 by llima-ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	plus_flag(t_format *buffer, int *len)
{
	char	*tmp;

	if(buffer->cf_now->flag_plus == TRUE)
	{
		if(*buffer->formated_src == '-')
			return;
		tmp = ft_strjoin("+", buffer->formated_src);
		free(buffer->formated_src);
		buffer->formated_src = tmp;
		*len = *len + 1;
	}
}

void	space_flag(t_format *buffer, int *len)
{
	char	*tmp;

	if(buffer->cf_now->flag_space == TRUE && buffer->cf_now->flag_plus == FALSE)
	{
		if(*buffer->formated_src == '-')
			return;
		tmp = ft_strjoin(" ", buffer->formated_src);
		free(buffer->formated_src);
		buffer->formated_src = tmp;
		*len = *len + 1;
	}
}

void	zero_flag(t_format *buffer, char *tmp)
{
	if(buffer->cf_now->flag_0 == TRUE && 
		buffer->cf_now->flag_align == FALSE &&
		buffer->cf_now->flag_pointer == 0)
		ft_memset(tmp, '0', buffer->cf_now->min_width);
	else
		ft_memset(tmp, ' ', buffer->cf_now->min_width);
}