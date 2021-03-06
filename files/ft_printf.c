/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luizz <luizz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 10:51:33 by llima-ce          #+#    #+#             */
/*   Updated: 2021/11/05 15:29:27 by luizz            ###   ########.fr       */
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
	len = ft_vfprintf(format, args);
	va_end(args);
	return (len);
}

void	put_formated(t_format *buffer)
{
	char	*tmp;
	int		a;

	a = 0;
	tmp = buffer->formated_src;
	while (a < buffer->len_formated)
	{
		write(1, &tmp[a], 1);
		a++;
	}
}

int	ft_vfprintf(const char *format, va_list args)
{
	t_format	*buffer;

	buffer = ft_start_struct(args);
	while (*format != 0)
	{
		if (*format == '%')
		{
			format += ft_check_all((char *)format + 1, buffer);
			format++;
			put_formated(buffer);
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
