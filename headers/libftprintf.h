/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima-ce <llima-ce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 10:51:38 by llima-ce          #+#    #+#             */
/*   Updated: 2021/10/08 10:41:42 by llima-ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdarg.h>
# include "../libft/libft.h"
#include <stdio.h>

# define CONVERSIONS "cspdiuxX%"
# define HEX "0123456789abcdef"
# define HEXU "0123456789ABCDEF"

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
void		ft_formating(t_format *buffer);


int			ft_new_errors(t_format *buffer,int type);
t_format	*ft_start_struct(va_list args);
void		ft_reset_struct(t_format *buffer);
int			ft_end_struct(t_format *buffer);

void		ft_get_string(t_format *buffer);
void		ft_get_char(t_format *buffer);
void		ft_get_adress(t_format *buffer);
void		ft_get_i_d(t_format *buffer);
void		ft_get_u_x(t_format *buffer,char *base);

void		pointer_flag(t_format *buffer, int *len);
void		min_width_flag(t_format *buffer, int *len);
void		hastag_flag(t_format *buffer, int *len);
void		zero_flag(t_format *buffer, char *tmp);
void		space_flag(t_format *buffer, int *len);
void		plus_flag(t_format *buffer, int *len);

#endif