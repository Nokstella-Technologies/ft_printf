<div>
<p align="center">
   <img src="./.github/faceTatoo.png" alt="Face_Tatto" width="500"/>
</p>
</div>
<p align="center">
  <a aria-label="Completed" href="https://www.42sp.org.br/">
    <img src="https://img.shields.io/badge/42.sp-printf-01ca73?logo="></img>
  </a>
  <a href="https://github.com/Face-Tattoo/ft_printf/commits/master">
    <img alt="GitHub last commit" src="https://img.shields.io/github/last-commit/luizlcezario/get_next_line?color=01ca73">
  </a> 

  <a href="https://github.com/Face-Tattoo/ft_printf/stargazers">
    <img alt="Stargazers" src="https://img.shields.io/github/stars/luizlcezario/get_next_line?color=01ca73&logo=github">
  </a>
</p>

<div align="center">
  <sub>FT_printf BenchMark of 42. Make with ❤︎
    </a>
  </sub>
</div>


# 🚀 Introduction to FT_printf

This is the third project in the 42 Cadet Curriculum. This project is pretty straight forward, recode the printf function.
The versatility of the printf function in C represents a great exercise in programming for us. This project is of moderate difficulty. It will enable you to discover variadic functions in C. The key to a successful ft_printf is a well-structured and good extensible code.


### Prototype

`int ft_printf(const char *, ...);` - This is copy of the otiginal printf.

### :clipboard: Conversions & Flags & Expected Order

| Conversion  | Description														 			| Project 		|
|-------|-----------------------------------------------------------------------------------|---------------|
| **c** | Single ascii character         													|Mandatory		|
| **s** | String of characters NULL terminated												|Mandatory		|
| **p** | Pointer location converted to hexadecimal value									|Mandatory		|
| **d** | Decimal number 																	|Mandatory		|
| **i** | Integer in decimal base                 											|Mandatory		|
| **u** | Unsigned integer in decimal base                									|Mandatory		|
| **x** | Unsigned number printed in lowercase hexadecimal base                				|Mandatory		|
| **X** | Unsigned number printed in uppercase hexadecimal base                				|Mandatory		|
| **%** | The '%' ascii character                 											|Mandatory		|

| Flag  | Description														 				| Project 		|
|-------|-----------------------------------------------------------------------------------|---------------|
| **-** | Left align the argument passed	         										|Bonus 1		|
| **0** | Add '0' as a padding character in numeric conversions (single space is default)	|Bonus 1		|
| **.** | Precision definition, followed by a number 										|Bonus 1		|
| **+** | Add a plus sign ('+') in the front of positive numeric conversions 				|Bonus 2		|
| **' '** | Add a single space (' ') in the front of positive numeric conversions 			|Bonus 2		|
| **#** | Add the corresponding prefix in front of x, X and o conversions                 	|Bonus 2		|

| Holder key  | Prefix and justification flags *| Minimum Width *| Precision *	| Conversion 	|
|-------------|---------------------------------|---------------|---------------|---------------|
|`%`		  | `-` , `0` , `+` ,  ...			| `10`, `5` , ... | `.`, `.10`, `.5`, ... | `c`, `d`, `i`, `s`, ... |  

# Some help for those who are doing

In the Picture Below you will see the campatibility of the convertion types with the flags
<img src="./.github/compatibility.png" alt="campatibility of the flags with the conversion types" width= "800"/>

# :construction_worker: How to Teste

```

# Clone the Repo.
$ git clone https://github.com/Face-Tattoo/ft_printf.git

# Enter in the Folder.
$ cd ft_printf

# for testing the printf and the formatf, modify the main file and than run the comand.
$ make teste

# now you will see a a.out file run than and see your tests.
$ ./a.out

```

# :bug: Issues?

Please feel free **to create a new issue** with its title and description on the issues page of the [ft_printf](https://github.com/Face-Tattoo/ft_printf/issues) Repository. If you have already found the solution to the problem, **I would love to review your pull request**!


Give ⭐️ if you like this project, this will help me!