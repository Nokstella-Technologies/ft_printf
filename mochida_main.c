#include "libftprintf.h"
#include <stdio.h>
#include <limits.h>

/****************************/
/*        BURRITOS          */
/****************************/
int main (void)
{
	int i;
	unsigned int ui;
	char c;
	char *s;
	size_t count[2];
	//long long ll;

	i = 0;
	ui = 0;
	c = 0;
	s = 0;

	printf ("\n== printf original\n>> sua ft_print\n\n");


/******************************************************************************/
/***************************       str       **********************************/
/******************************************************************************/

// TEST LITERAL------
	printf("\n01*** LITERAL ***\n");
	count[0] = printf ("==this is just a literal\n");
	count[1] = ft_printf (">>this is just a literal\n");
	printf( "Or:Ft [%zu:%zu] \n", count[0], count[1]);


// TEST CHAR = 0------
	printf ("\n02*** CHAR=0 ***\n");
	count[0] = printf ("==|%c|\n", c);
	count[1] = ft_printf (">>|%c|\n", c);
	printf( "Or:Ft [%zu:%zu] \n", count[0], count[1]);

// TEST CHAR = 'C'------
	c = 'C';
	printf ("\n03*** CHAR='C' ***\n");
	count[0] = printf ("==|%c|\n", c);
	count[1] = ft_printf (">>|%c|\n", c);
	printf( "Or:Ft [%zu:%zu] \n", count[0], count[1]);
	c = 0;

// TEST CHAR, ARG=55------
	c = 'C';
	printf ("\n04*** CHAR='C', invalid ARG(55)  ***\n");
	count[0] = printf ("==|%c|\n", 55);
	count[1] = ft_printf (">>|%c|\n", 55);
	printf( "Or:Ft [%zu:%zu] \n", count[0], count[1]);
	c = 0;

// TEST CHAR, ARG=UINT_MAX------
	c = 'C';
	printf ("\n05*** CHAR='C', invalid ARG(UINT_MAX)  ***\n");
	count[0] = printf ("==|%c|\n", UINT_MAX);
	count[1] = ft_printf (">>|%c|\n", UINT_MAX);
	printf( "Or:Ft [%zu:%zu] \n", count[0], count[1]);
	c = 0;

// TEST CHAR, ARG=-1------
	c = 'C';
	printf ("\n06*** CHAR='C', invalid ARG(-1)  ***\n");
	count[0] = printf ("==|%c|\n", -1);
	count[1] = ft_printf (">>|%c|\n", -1);
	printf( "Or:Ft [%zu:%zu] \n", count[0], count[1]);
	c = 0;

// TEST NULL STRING------
	printf ("\n07***s = NULSTRING***\n");
	count[0] = printf ("==|%s|\n", s);
	count[1] = ft_printf (">>|%s|\n", s);
	printf( "Or:Ft [%zu:%zu] \n", count[0], count[1]);

// TEST STRINGUDO SEM %------
	s = ft_strdup("abcdefghijklmnopqrstuvwxyz|\n>>|ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789/*--.+|/?!@#$Â¨&*()_)+");
	printf ("\n08*** s= STRINGUDO SEM %%***\n");
	count[0] = printf ("==|%s|\n", s);
	count[1] = ft_printf (">>|%s|\n", s);
	printf( "Or:Ft [%zu:%zu] \n", count[0], count[1]);
	free(s);
	s = 0;

// TEST STRINGUim com %------
	s = ft_strdup(">>dentro %%<<");
	printf ("\n09*** s= STRINGUim com %%***\n");
	count[0] = printf ("==|%s| !--fora%%--!\n", s);
	count[1] = ft_printf ("==|%s| !--fora%%--!\n", s);
	printf( "Or:Ft [%zu:%zu] \n", count[0], count[1]);
	free(s);
	s = 0;

// TEST STRING VAZIA------
	s = ft_strdup("");
	printf ("\n10*** s= STRING VAZIA ***\n");
	count[0] = printf ("==|%s|\n", s);
	count[1] = ft_printf (">>|%s|\n", s);
	printf( "Or:Ft [%zu:%zu] \n", count[0], count[1]);
	free(s);
	s = 0;


/******************************************************************************/
/***************************       int       **********************************/
/******************************************************************************/

// TEST int = 0
	i = 0;
	printf ("\n11*** i=0 ***\n");
	count[0] = printf ("==|%i|\n", i);
	count[1] = ft_printf (">>|%i|\n", i);
	printf( "Or:Ft [%zu:%zu] \n", count[0], count[1]);
	i = 0;

// TEST int = -1
	i = -1;
	printf ("\n12*** i=-1 ***\n");
	count[0] = printf ("==|%i|\n", i);
	count[1] = ft_printf (">>|%i|\n", i);
	printf( "Or:Ft [%zu:%zu] \n", count[0], count[1]);
	i = 0;

// TEST int = INT_MIN
	i = INT_MIN;
	printf ("\n13*** i=INT_MIN ***\n");
	count[0] = printf ("==|%i|\n", i);
	count[1] = ft_printf (">>|%i|\n", i);
	printf( "Or:Ft [%zu:%zu] \n", count[0], count[1]);
	i = 0;

// TEST int = INT_MAX
	i = INT_MAX;
	printf ("\n14*** i=INT_MAX ***\n");
	count[0] = printf ("==|%i|\n", i);
	count[1] = ft_printf (">>|%i|\n", i);
	printf( "Or:Ft [%zu:%zu] \n", count[0], count[1]);
	i = 0;

// TEST int = 'x'
	i = 'x';
	printf ("\n15*** i='x' ***\n");
	count[0] = printf ("==|%i|\n", i);
	count[1] = ft_printf (">>|%i|\n", i);
	printf( "Or:Ft [%zu:%zu] \n", count[0], count[1]);
	i = 0;

/*	i = INT_MIN - 1;
	printf ("\n*** i=int underflow ***\n");
	count[0] = printf ("==|%i|\n", i);
	count[1] = ft_printf (">>|%i|\n", i);
	printf( "Or:Ft [%zu:%zu] \n", count[0], count[1]);
	i = 0; */

/*	i = INT_MAX + 1;
	printf ("\n*** i=int overflow ***\n");
	count[0] = printf ("==|%i|\n", i);
	count[1] = ft_printf (">>|%i|\n", i);
	printf( "Or:Ft [%zu:%zu] \n", count[0], count[1]);
	i = 0; */



/******************************************************************************/
/***************************       uint       *********************************/
/******************************************************************************/

// TEST unsigned int = 0
	ui = 0;
	printf ("\n16*** ui=0 ***\n");
	count[0] = printf ("==|%u|\n", ui);
	count[1] = ft_printf (">>|%u|\n", ui);
	printf( "Or:Ft [%zu:%zu] \n", count[0], count[1]);
	ui = 0;

// TEST unsigned int = -1
	ui = -1;
	printf ("\n17*** ui=-1 ***\n");
	count[0] = printf ("==|%u|\n", ui);
	count[1] = ft_printf (">>|%u|\n", ui);
	printf( "Or:Ft [%zu:%zu] \n", count[0], count[1]);
	ui = 0;

// TEST unsigned int = INT_MIN
	ui = INT_MIN;
	printf ("\n18*** ui=INT_MIN ***\n");
	count[0] = printf ("==|%u|\n", ui);
	count[1] = ft_printf (">>|%u|\n", ui);
	printf( "Or:Ft [%zu:%zu] \n", count[0], count[1]);
	ui = 0;

// TEST unsigned int = INT_MAX
	ui = INT_MAX;
	printf ("\n19*** ui=INT_MAX ***\n");
	count[0] = printf ("==|%u|\n", ui);
	count[1] = ft_printf (">>|%u|\n", ui);
	printf( "Or:Ft [%zu:%zu] \n", count[0], count[1]);
	ui = 0;

// TEST unsigned int = 'x'
	ui = 'x';
	printf ("\n20*** ui='x' ***\n");
	count[0] = printf ("==|%u|\n", ui);
	count[1] = ft_printf (">>|%u|\n", ui);
	printf( "Or:Ft [%zu:%zu] \n", count[0], count[1]);
	ui = 0;

// TEST unsigned int = int underflow
	ui = INT_MIN;
	ui--;
	printf ("\n21*** ui=int underflow ***\n");
	count[0] = printf ("==|%u|\n", ui);
	count[1] = ft_printf (">>|%u|\n", ui);
	printf( "Or:Ft [%zu:%zu] \n", count[0], count[1]);
	ui = 0;

// TEST unsigned int = int overflow
	ui = INT_MAX;
	ui++;
	printf ("\n22*** ui=int overflow ***\n");
	count[0] = printf ("==|%u|\n", ui);
	count[1] = ft_printf (">>|%u|\n", ui);
	printf( "Or:Ft [%zu:%zu] \n", count[0], count[1]);
	ui = 0;

// TEST unsigned int = UINT_MAX
	ui = UINT_MAX;
	printf ("\n23*** ui=UINT_MAX ***\n");
	count[0] = printf ("==|%u|\n", ui);
	count[1] = ft_printf (">>|%u|\n", ui);
	printf( "Or:Ft [%zu:%zu] \n", count[0], count[1]);
	ui = 0;

// TEST unsigned int = 48, arg errado
	ui = 48;
	printf ("\n24*** ui=48 , arg=97 ***\n");
	count[0] = printf ("==|%u|\n", 97);
	count[1] = ft_printf (">>|%u|\n", 97);
	printf( "Or:Ft [%zu:%zu] \n", count[0], count[1]);
	ui = 0;

/*	ui = 95;
	printf ("\n*** ui=95 , arg=uint overflow ***\n");
	count[0] = printf ("==|%u|\n", 4294967295);
	count[1] = ft_printf (">>|%u|\n", 4294967295);
	printf( "Or:Ft [%zu:%zu] \n", count[0], count[1]);
	ui = 0;*/



/******************************************************************************/
/***************************       hex       **********************************/
/******************************************************************************/

// TEST HEX unsigned int = 0
	ui = 0;
	printf ("\n25*** hex ui=0 ***\n");
	count[0] = printf ("==|%x|\n", ui);
	count[1] = ft_printf (">>|%x|\n", ui);
	printf( "Or:Ft [%zu:%zu] \n", count[0], count[1]);
	ui = 0;


// TEST HEX unsigned int = UINT_MAX
	ui = UINT_MAX;
	printf ("\n26*** hex ui=UINT_MAX ***\n");
	count[0] = printf ("==|%x|\n", ui);
	count[1] = ft_printf (">>|%x|\n", ui);
	printf( "Or:Ft [%zu:%zu] \n", count[0], count[1]);
	ui = 0;

// TEST HEX unsigned int = -1
	ui = -1;
	printf ("\n27*** hex ui=-1 ***\n");
	count[0] = printf ("==|%x|\n", ui);
	count[1] = ft_printf (">>|%x|\n", ui);
	printf( "Or:Ft [%zu:%zu] \n", count[0], count[1]);
	ui = 0;

// TEST HEX unsigned int = 11259375
	ui = 11259375;
	printf ("\n28*** hex ui=11259375 ***\n");
	count[0] = printf ("==|%x|\n", ui);
	count[1] = ft_printf (">>|%x|\n", ui);
	printf( "Or:Ft [%zu:%zu] \n", count[0], count[1]);
	ui = 0;

// TEST HEX unsigned int = 1 arg = 11259375
	ui = 1;
	printf ("\n29*** hex ui=1 arg=11259375 ***\n");
	count[0] = printf ("==|%x|\n", 11259375);
	count[1] = ft_printf (">>|%x|\n", 11259375);
	printf( "Or:Ft [%zu:%zu] \n", count[0], count[1]);
	ui = 0;

// TEST HEX unsigned int = 1
	ui = 1;
	printf ("\n30*** hex ui=1 ***\n");
	count[0] = printf ("==|%x|\n", ui);
	count[1] = ft_printf (">>|%x|\n", ui);
	printf( "Or:Ft [%zu:%zu] \n", count[0], count[1]);
	ui = 0;

// TEST HEX int = INT_MIN
	i = INT_MIN;
	printf ("\n31*** hex i=INT_MIN ***\n");
	count[0] = printf ("==|%x|\n", i);
	count[1] = ft_printf (">>|%x|\n", i);
	printf( "Or:Ft [%zu:%zu] \n", count[0], count[1]);
	i = 0;

// TEST HEX int = int oflw
	i = INT_MAX;
	i++;
	printf ("\n32*** hex i= ovflw ***\n");
	count[0] = printf ("==|%x|\n", i);
	count[1] = ft_printf (">>|%x|\n", i);
	printf( "Or:Ft [%zu:%zu] \n", count[0], count[1]);
	i = 0;

// TEST HEX int = int underflw
	i = INT_MIN;
	i--;
	printf ("\n33*** hex i= int underflw ***\n");
	count[0] = printf ("==|%x|\n", i);
	count[1] = ft_printf (">>|%x|\n", i);
	printf( "Or:Ft [%zu:%zu] \n", count[0], count[1]);
	i = 0;

// TEST HEX unsigned int = null pointer
/*	s = 0;
	printf ("\n*** hex arg is null pointer ***\n");
	count[0] = printf ("==|%x|\n", *s); //SEGV read 0
	count[1] = ft_printf (">>|%x|\n", *s);
	printf( "Or:Ft [%zu:%zu] \n", count[0], count[1]);
	s = 0; */

// TEST HEX unsigned int = 0
/*	ui = 0;
	printf ("\n*** hex ui=0, STR literal as arg ***\n");
	count[0] = printf ("==|%s|\n", "test");
	//count[0] = printf ("==|%x|\n", "test"); //essa linha nÃ£o deixa compilar
	count[1] = ft_printf (">>|%x|\n", "test");
	printf( "Or:Ft [%zu:%zu] \n", count[0], count[1]);
	ui = 0; */

/******************************************************************************/
/***************************       HEX       **********************************/
/******************************************************************************/

// TEST HEX CAPS unsigned int = 0
	ui = 0;
	printf ("\n34*** hex CAPS ui=0 ***\n");
	count[0] = printf ("==|%X|\n", ui);
	count[1] = ft_printf (">>|%X|\n", ui);
	printf( "Or:Ft [%zu:%zu] \n", count[0], count[1]);
	ui = 0;


// TEST HEX CAPS unsigned int = UINT_MAX
	ui = UINT_MAX;
	printf ("\n35*** hex CAPS ui=UINT_MAX ***\n");
	count[0] = printf ("==|%X|\n", ui);
	count[1] = ft_printf (">>|%X|\n", ui);
	printf( "Or:Ft [%zu:%zu] \n", count[0], count[1]);
	ui = 0;

// TEST HEX CAPS unsigned int = -1
	ui = -1;
	printf ("\n36*** hex CAPS ui=-1 ***\n");
	count[0] = printf ("==|%X|\n", ui);
	count[1] = ft_printf (">>|%X|\n", ui);
	printf( "Or:Ft [%zu:%zu] \n", count[0], count[1]);
	ui = 0;

// TEST HEX CAPS unsigned int = 11259375
	ui = 11259375;
	printf ("\n37*** hex CAPS ui=11259375 ***\n");
	count[0] = printf ("==|%X|\n", ui);
	count[1] = ft_printf (">>|%X|\n", ui);
	printf( "Or:Ft [%zu:%zu] \n", count[0], count[1]);
	ui = 0;

// TEST HEX CAPS unsigned int = 1 arg = 11259375
	ui = 1;
	printf ("\n38*** hex CAPS ui=1 arg=11259375 ***\n");
	count[0] = printf ("==|%X|\n", 11259375);
	count[1] = ft_printf (">>|%X|\n", 11259375);
	printf( "Or:Ft [%zu:%zu] \n", count[0], count[1]);
	ui = 0;

// TEST HEX CAPS unsigned int = 1
	ui = 1;
	printf ("\n39*** hex CAPS ui=1 ***\n");
	count[0] = printf ("==|%X|\n", ui);
	count[1] = ft_printf (">>|%X|\n", ui);
	printf( "Or:Ft [%zu:%zu] \n", count[0], count[1]);
	ui = 0;

// TEST HEX CAPS int = INT_MIN
	i = INT_MIN;
	printf ("\n40*** hex CAPS i=INT_MIN ***\n");
	count[0] = printf ("==|%X|\n", i);
	count[1] = ft_printf (">>|%X|\n", i);
	printf( "Or:Ft [%zu:%zu] \n", count[0], count[1]);
	i = 0;

// TEST HEX CAPS int = int oflw
	i = INT_MAX;
	i++;
	printf ("\n41*** hex CAPS i= ovflw ***\n");
	count[0] = printf ("==|%X|\n", i);
	count[1] = ft_printf (">>|%X|\n", i);
	printf( "Or:Ft [%zu:%zu] \n", count[0], count[1]);
	i = 0;

// TEST HEX CAPS int = int underflw
	i = INT_MIN;
	i--;
	printf ("\n42*** hex CAPS i= int underflw ***\n");
	count[0] = printf ("==|%X|\n", i);
	count[1] = ft_printf (">>|%X|\n", i);
	printf( "Or:Ft [%zu:%zu] \n", count[0], count[1]);
	i = 0;

// TEST HEX CAPS arg = string ptr
	s = ft_strdup("__teste1230__");
	printf ("\n43*** hex CAPS arg is string ptr ***\n");
	count[0] = printf ("==|%X|\n", *s);
	count[1] = ft_printf (">>|%X|\n", *s);
	printf( "Or:Ft [%zu:%zu] \n", count[0], count[1]);
	free(s);
	s = 0;

// TEST HEX CAPS arg = null ptr
/*	s = 0;
	printf ("\n*** hex CAPS arg is null pointer (crash expected) ***\n");
	count[0] = printf ("==|%X|\n", *s);
	count[1] = ft_printf (">>|%X|\n", *s);
	printf( "Or:Ft [%zu:%zu] \n", count[0], count[1]); */





/******************************************************************************/
/***************************       PTR       **********************************/
/******************************************************************************/

// TEST ITERATIVE PTR
	s = 0;
	while (i<=10)
	{
	printf ("\n44*** ITERATIVE PTR ***\n");
	count[0] = printf ("==|%p|\n", s);
	count[1] = ft_printf (">>|%p|\n", s);
	printf( "Or:Ft [%zu:%zu] \n", count[0], count[1]);
	s++;
	i++;
	}
	s = 0;

// TEST simple ptr
	s = ft_strdup("__teste1230__");
	printf ("\n45*** simple ptr ***\n");
	count[0] = printf ("==|%p|\n", s);
	count[1] = ft_printf (">>|%p|\n", s);
	printf( "Or:Ft [%zu:%zu] \n", count[0], count[1]);
	free(s);
	s = 0;

// TEST ptr = 1152921504606846975UL
	s = (char *) 1152921504606846975UL;
	printf ("\n46*** ptr = fffffffffffffff ***\n");
	count[0] = printf ("==|%p|\n", s);
	count[1] = ft_printf (">>|%p|\n", s);
	printf( "Or:Ft [%zu:%zu] \n", count[0], count[1]);
	s = 0;

// TEST ptr = 18446744073709551614UL == FFFFFFFFFFFFFFFE
	s = (char *) 18446744073709551614UL;
	printf ("\n47*** ptr = ULONG_MAX -1 ***\n");
	count[0] = printf ("==|%p|\n", s);
	count[1] = ft_printf (">>|%p|\n", s);
	printf( "Or:Ft [%zu:%zu] \n", count[0], count[1]);
	s = 0;

// TEST ptr = ULONG_MAX
	s = (char *) ULONG_MAX;
	printf ("\n48*** ptr = ULONG_MAX ***\n");
	count[0] = printf ("==|%p|\n", s);
	count[1] = ft_printf (">>|%p|\n", s);
	printf( "Or:Ft [%zu:%zu] \n", count[0], count[1]);
	s = 0;



// TEST char = multi arg
	c = 'C';
	printf ("\n49*** multi char ***\n");
	count[0] = printf ("==|%c| |%c| |%c| \n", 'c', 97, c);
	count[1] = ft_printf ("==|%c| |%c| |%c| \n", 'c', 97, c);
	printf( "Or:Ft [%zu:%zu] \n", count[0], count[1]);
	c = 0;

	printf ("\n50*** multi char ***\n");
	count[0] = printf("%c%c%c*\n", '\0', '1', 1);
	count[1] = ft_printf("%c%c%c*\n", '\0', '1', 1);
	printf( "Or:Ft [%zu:%zu] \n", count[0], count[1]);

	printf ("\n50*** multi char ***\n");
	count[0] = printf("*%%%%%%%%*\n");
	count[1] = ft_printf("*%%%%%%%%*\n");
	printf( "Or:Ft [%zu:%zu] \n", count[0], count[1]);
}