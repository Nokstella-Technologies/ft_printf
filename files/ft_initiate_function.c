/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_initiate_function.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima-ce <llima-ce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 18:19:58 by llima-ce          #+#    #+#             */
/*   Updated: 2021/10/07 09:18:05 by llima-ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libftprintf.h"

t_format *ft_start_struct(va_list args)
{
	t_format *new;
	t_convert_flags *cf_now;

	new = malloc(sizeof(t_format));
	cf_now = malloc(sizeof(t_convert_flags));
	new->len = 0;
	va_copy(new->args_c, args);
	cf_now->conversion = '\0';
	cf_now->flag_0 = false;
	cf_now->flag_align = false;
	cf_now->flag_hashtag = false;
	cf_now->flag_plus = false;
	cf_now->flag_space = false;
	cf_now->flag_pointer = 0;
	cf_now->min_width = 0;
	new->cf_now = cf_now;
	return(new);
}
