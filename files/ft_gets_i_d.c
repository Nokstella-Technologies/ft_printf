/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gets_i_d.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima-ce <llima-ce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 13:52:11 by llima-ce          #+#    #+#             */
/*   Updated: 2021/10/08 10:16:15 by llima-ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	verify_signed_positin(t_format *buffer)
{
	char	*tmp;
	char	*compare;
	char	swap;
 
	tmp = ft_strfstr(buffer->formated_src,"-+");
	if(*tmp != 0)
	{
		compare = tmp - 1;
		while(*compare == '0' && compare != buffer->formated_src)
			compare--;
		swap = *tmp;
		*tmp = *(compare + 1);
		*(compare + 1) = swap;
	}
}

void	ft_get_i_d(t_format *buffer)
{
	int		len;

	buffer->formated_src = ft_itoa(va_arg(buffer->args_c, int));
	if(!buffer->formated_src)
	{
		free(buffer->formated_src);
		buffer->formated_src = ft_strdup("0");
	}
	len = ft_strlen(buffer->formated_src);
	pointer_flag(buffer, &len);
	min_width_flag(buffer, &len);
	space_flag(buffer, &len);
	plus_flag(buffer, &len);
	verify_signed_positin(buffer);
	buffer->len += len;
}