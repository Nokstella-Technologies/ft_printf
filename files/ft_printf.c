/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima-ce <llima-ce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 10:51:33 by llima-ce          #+#    #+#             */
/*   Updated: 2021/10/14 17:16:56 by llima-ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		len;

	len = 0;
	if (format == NULL)
		return (len);
	va_start(args, format);
	len = ft_vfprintf(format , args);
	va_end(args);
	return (len);
}

int	ft_vfprintf(const char *format, va_list args)
{
	t_format	*buffer;

	buffer = ft_start_struct(args);
	while(*format != 0)
	{
		if(*format == '%')
		{
			format +=  ft_check_all((char *)format + 1, buffer);
			format++;
			ft_putstr_fd(buffer->formated_src, 1);
			ft_reset_struct(buffer);
		}
		else
		{
			buffer->len = buffer->len + 1;
			write(1, format, 1);
			format++;
		}
	}
	return (ft_end_struct(buffer));
}
