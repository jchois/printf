# printf

This project ```_printf``` recreate the ```printf``` with our knowledge of C programming so far.

#### Function prototype

```
int _printf(format fm, ...)
```


## Files

| Files    			| Description                          							  |
| ----------------: | --------------------------------------------------------------- |
| _printf 			| Entry point for the printf function.							  |
| check.c 			| Contains the function that checks for any match with the format.|
| holberton.h		| Header files for the the project.								  | 
| man_3_printf 		| Manpage for _printf. 											  |
| print_functions.c | Contains the first functions of the project. ("%c", "%s", "%%", "%r") |
| print_numbs.c 	| Contains other functions for the project. ("%d", "%i", "%b", "%o", "%u", "%x", "%X")		  |
| ROT13.c 	| Contains function ROT13 converter. ("%R")		  |


## Compilate and run tests

You can use any of the ```main.c``` found in the [test](./test) folder.

Files are compiled this way:

```
$ gcc -Wall -Wno-format -Werror -Wextra -pedantic *.c 
$ ./a.out
```

## Example

Print hello world:

```
_printf("%s, %s!\n", "Hello", "World");

OUTPUT:

$ Hello, World!
```

Print reverse string:

```
_printf("%r\n", "Holberton");

OUTPUT:

$ notrebloH
```

Print ROT13 format:

```
_printf("%R\n", "ABCDEFGHIJKLM");

OUTPUT:

$ NOPQRSTUVWXYZ
```

## Authors

- Elkin Mejia - [Github](https://github.com/ElkinAMG) , [Twitter](https://twitter.com/ElkinAMG)
- Juliana Chois - [Github](https://github.com/julianachois) , [Twitter](https://twitter.com/julianachois)
