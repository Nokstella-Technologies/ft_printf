/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima-ce <llima-ce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 10:51:33 by llima-ce          #+#    #+#             */
/*   Updated: 2021/09/29 14:24:28 by llima-ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <string.h>

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		len;

	if (format == NULL)
		return (0);
	va_start(args, format);	
	len = ft_formatf(1, format, args);
	va_end(args);
	return (len);
}

int	ft_vfprintf(int fd, const char *format, va_list args)
{
	
}