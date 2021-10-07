/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima-ce <llima-ce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 10:51:38 by llima-ce          #+#    #+#             */
/*   Updated: 2021/10/07 09:20:07 by llima-ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdarg.h>
# include "../libft/libft.h"
#include <stdio.h>

# define CONVERSIONS "cspdiuxX%"
# define ALL "cspdiuxX%-0.# +123456789"

typedef enum e_bool {true = 1, false = 2} t_bool;

typedef struct s_convert_flags{
	char	conversion;
	t_bool	flag_align;
	t_bool	flag_0;
	t_bool	flag_space;
	t_bool	flag_plus;
	t_bool	flag_hashtag;
	int		flag_pointer;
	int		min_width;
}			t_convert_flags;

typedef struct s_format {
	char			*formated_src;
	int				len;
	va_list			args_c;
	t_convert_flags	*cf_now;
}					t_format;



int			ft_printf(const char *format, ...);

int			ft_vfprintf(const char *format, va_list args);

int			ft_check_all(char *formating, t_format *buffer);

t_format	*ft_start_struct(va_list args);

int			ft_new_errors(t_format *buffer,int type);

void		ft_get_string(t_format *buffer);
void		ft_get_char(t_format *buffer);

void		ft_formating(t_format *buffer);
void		pointer_flag(t_format *buffer, int *len);
void		min_width_flag(t_format *buffer, int *len);
#endif