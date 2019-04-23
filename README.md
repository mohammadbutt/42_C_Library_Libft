# Recreating C Library - string.h and ctype.h
This is the first project in the curriculum provided by software engineering school - 42.

This project recreates functions from string.h and ctype.h libraries. Apart from creating functions from these libraries, the
project also creates some new functions.

Except for linked list functions, test cases are provided at the bottom for all the remaining functions which are commented.

# Compiling a program.

Compiling can be tricky.`gcc`, `clang` or `cc` can be used to compile. But the `Makefile` created for this program uses `gcc` and instuction in this README will also use `gcc`.

There are severeal methods to compile. For instance, in order to compile ft_strsplit.c program, following command can be ran:
```
gcc ft_strsplit.c ft_endtrim.c ft_strsub.c ft_wordcount.c ft_strlen.c
```
This gives an a.out file, which can be executed by simply typing `./a.out`.

But the trouble to compile a program by this method is that all of the the functions that are used in a program will be included and each function that calls on to additional functions would also have to be included. This would get challenging when a big program is compiled.

In order to make compiling easy, `Makefile` is created. Typing and entering `make` will create .o file for each file and it will also create `libft.a` which is a static library. Now including this static library with a program will compile the program without having to include any additional programs or files. Below are the commands.

# Installation
```
make
gcc ft_strsplit.c libft.a
./a.out
```

There are also additionals components in `Makefile`
+ `make clean` will remove all the .o files.
+ `make fclean` will remove all the .o files and libft.a, which is the static library.
+ `make re` will remove all the .o files and libft.a. And then it will remake the .o files and libft.a.

Below are the snapshots of these functions.

<img src="https://github.com/mohammadbutt/42_C_Library_Libft/blob/master/snapshots/libft_unit_test_1.png">
<img src="https://github.com/mohammadbutt/42_C_Library_Libft/blob/master/snapshots/libft_unit_test_2.png">

To assess how the functions performed, these functions were tested using the following repo: https://github.com/alelievr/libft-unit-test
