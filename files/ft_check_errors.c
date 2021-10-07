/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_errors.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima-ce <llima-ce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 18:19:50 by llima-ce          #+#    #+#             */
/*   Updated: 2021/10/07 09:18:05 by llima-ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_new_errors(t_format *buffer,int type)
{
	// printf("ok");
	if(type == 1)
	{
		buffer->len = buffer->len + 1;
		write(1,"%", 1);
		return(1);
	}
	return(1);
}