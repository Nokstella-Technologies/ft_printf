/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima-ce <llima-ce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 10:51:38 by llima-ce          #+#    #+#             */
/*   Updated: 2021/09/29 15:03:05 by llima-ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "libft.h"


// (flags: ' ' '#' '0' '+')(min_width)(pricion '.10')(conversion: 's','c','d','x')
int ft_printf(const char *format, ...);

int	ft_vfprintf(int fd, const char *format, va_list args);

#endif