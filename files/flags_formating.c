/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags_formating.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima-ce <llima-ce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 09:19:14 by llima-ce          #+#    #+#             */
/*   Updated: 2021/10/08 10:21:10 by llima-ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	minus_flag(t_format *buffer, int *len, char *tmp)
{
	if (buffer->cf_now->flag_align == true)
	{
		ft_memcpy(tmp, buffer->formated_src, *len);
	}
	else
	{
		ft_strlcpy(tmp + buffer->cf_now->min_width - *len ,
		buffer->formated_src , *len + 1);
	}
}

void	pointer_flag(t_format *buffer, int *len)
{
	char	*tmp;
	if (buffer->cf_now->flag_pointer >= *len)
	{
		if(buffer->cf_now->conversion == 's')
		{
			*len = buffer->cf_now->flag_pointer;
			buffer->formated_src[*len] = 0;
		}
		else if (buffer->cf_now->conversion == 'd' || 
				buffer->cf_now->conversion == 'i' || 
				buffer->cf_now->conversion == 'u' || 
				buffer->cf_now->conversion == 'x' ||
				buffer->cf_now->conversion == 'X' )
		{
			tmp = malloc(buffer->cf_now->flag_pointer + 1 *sizeof(char));
			ft_memset(tmp, '0', buffer->cf_now->flag_pointer);
			tmp[buffer->cf_now->flag_pointer] = 0;
			ft_memcpy(&tmp[buffer->cf_now->flag_pointer - *len],buffer->formated_src, *len);
			free(buffer->formated_src);
			buffer->formated_src = tmp;
			*len = buffer->cf_now->flag_pointer;
		}
	}
}

void	min_width_flag(t_format *buffer, int *len)
{
	char *tmp;

	if (buffer->cf_now->min_width > *len)
	{
		tmp = malloc(buffer->cf_now->min_width + 1 *sizeof(char));
		tmp[buffer->cf_now->min_width] = 0;
		zero_flag(buffer, tmp);
		minus_flag(buffer, len, tmp);
		free(buffer->formated_src);
		buffer->formated_src = tmp;
		*len = buffer->cf_now->min_width;
	}
}


void	hastag_flag(t_format *buffer, int *len)
{
	char	*tmp;

	if (buffer->cf_now->flag_hashtag == true)
	{
		if (buffer->cf_now->conversion == 'p' || 
			buffer->cf_now->conversion == 'x')
		{
			tmp = ft_strjoin("0x", buffer->formated_src);
			free(buffer->formated_src);
			buffer->formated_src = tmp;
			*len += 2;
		}
		else if (buffer->cf_now->conversion == 'X')
		{
			tmp = ft_strjoin("0X", buffer->formated_src);
			free(buffer->formated_src);
			buffer->formated_src = tmp;
			*len += 2;
		}
	}
}