/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima-ce <llima-ce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 13:28:39 by llima-ce          #+#    #+#             */
/*   Updated: 2021/09/29 15:09:29 by llima-ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int main(void)
{
	char teste[] = "luiz";
	int number = 30;
	printf("%d\n",10);
	printf("%c\n", 't');
	printf("<%-10s>\n", "teste");
	printf("<%10s>\n", "teste");
	printf("%p\n", teste);
	printf("%#x\n", 124312);
	printf("%#X\n", 123123);
	// printf("%i\n", 16);
	//  printf("%u\n",-1);
	// printf("%x\n", 15);
	// printf("%X\n", 15);
	// printf("%%\n");
	// printf("%-5s\n","pokemon");
	// printf("%#x\n", 15);
	printf("%d\n", -15);
	printf("%d\n", 15);
	printf("% d\n", 15);
	printf("%+d\n", 15);
	printf("%+.1d\n", 15);
	// printf("%-10da\n", number);
	// printf("%10da\n", number);
	// printf("%-#2f\n",(float) number);\
	// printf("%#f\n", (float) number);
}