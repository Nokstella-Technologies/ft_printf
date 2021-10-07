/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima-ce <llima-ce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 13:28:39 by llima-ce          #+#    #+#             */
/*   Updated: 2021/10/07 09:36:03 by llima-ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libftprintf.h"
// #include "./libft/libft.h"

int main(void)
{
	char teste[] = "teste";
	// int number = 30;
	// printf("%.90f\n",10.92);
	// printf("%c\n", 't');
	// printf("<%-10s>\n", "teste");
	// printf("%p\n", teste);
	// printf("%x\n", 124312);
	// printf("%#X\n", 123123);
	// printf("%i\n", 16);
	//  printf("%u\n",-1);
	// printf("%x\n", 15);
	// printf("%X\n", 15);
	// printf("%%\n");
	// printf("%-5s\n","pokemon");
	// printf("%#x\n", 15);
	// printf("%d\n", -15);
	// printf("<%20f>\n",(float) 15);
	// printf("<%+020.10f>\n", 15.92);
	// printf("%+0d\n", 15);
	// printf("%+.2f\n", 15.21);
	// printf("%-10da\n", number);
	// printf("%10da\n", number);
	// printf("%-#2f\n",(float) number);
	// printf("%#f\n", (float) number);
	// printf(" = size :%d\n",printf("%-s", teste));
	// printf("= %d\n",printf("%-22s.", teste));
	// printf("= %d\n",printf("%22s.", teste));
	printf("TESTE STRING\n");
	printf(" len = %d\n",ft_printf("MyFunc =<%-22s>", teste));
	printf(" len = %d\n",printf("Origin =<%-22s>", teste));
	printf(" len = %d\n",ft_printf("MyFunc =<%22s>", teste));
	printf(" len = %d\n",printf("Origin =<%22s>", teste));
	printf("\nTESTE CHAR\n");
	printf(" len = %d\n",ft_printf("MyFunc =<%2c>", 'L'));
	printf(" len = %d\n",printf("Origin =<%2c>", 'L'));
	printf(" len = %d\n",ft_printf("MyFunc =<%-5c>", 'a'));
	printf(" len = %d\n",printf("Origin =<%-5c>", 'a'));
	printf("\nTESTE %%\n");
	printf(" len = %d\n",printf("Origin =<%-5%>"));
}