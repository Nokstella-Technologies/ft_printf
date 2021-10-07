/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_formating.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima-ce <llima-ce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 18:19:55 by llima-ce          #+#    #+#             */
/*   Updated: 2021/10/07 09:18:05 by llima-ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_formating(t_format *buffer)
{
	if(buffer->cf_now->conversion == 's')
		return(ft_get_string(buffer));
	else if(buffer->cf_now->conversion == 'c')
		return(ft_get_char(buffer));
}
