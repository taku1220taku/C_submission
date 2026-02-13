*This project has been created as part of the 42 curriculum by tkono.*

# Libft - Your First C Library

## Description
**Libft** is a fundamental project at 42 that requires students to re-implement a collection of standard C library functions, as well as additional utility functions.

The goal of this project is to understand the inner workings of these essential functions, learn about memory management, and build a reusable library that will be used in future 42 curriculum projects. This library serves as a personal toolkit, reinforcing the understanding of low-level data manipulation without relying on standard libraries.

### Key Features
* **Libc Functions:** Re-implementation of standard functions like `memset`, `strdup`, `atoi`, etc.
* **String Manipulation:** Custom tools for string processing (`ft_split`, `ft_strjoin`).
* **Linked Lists:** Bonus functions to manipulate lists (`t_list`).

## Instructions

### Compilation
To compile the library, run the following command in the root directory:

```bash
make


*This project has been created as part of the 42 curriculum by <Your Login>.*

# Libft - Your very first own library

## Description
Libft is the first project of the 42 curriculum. [cite_start]The goal is to create a C library (`libft.a`) that includes a reimplementation of several standard C library functions, as well as additional functions that will be useful for future projects[cite: 4, 14, 15].

This project helps in understanding the internal mechanisms of these functions, memory management, and basic algorithms.

## Detailed Description of the Library
The library consists of the following parts:

### [cite_start]Part 1 - Libc Functions [cite: 106]
Reimplementation of standard C library functions with the same prototypes and behaviors:
* **Character checks:** `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`
* **String manipulation:** `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strdup`
* **Memory manipulation:** `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc`
* **Type conversion:** `ft_atoi`, `ft_toupper`, `ft_tolower`

### [cite_start]Part 2 - Additional Functions [cite: 150]
Functions that are either not included in libc or exist in a different form:
* `ft_substr`: Allocates and returns a substring from the string 's'.
* `ft_strjoin`: Allocates and returns a new string, which is the result of concatenating 's1' and 's2'.
* `ft_strtrim`: Allocates and returns a copy of 's1' with the characters specified in 'set' removed from the beginning and the end.
* `ft_split`: Allocates and returns an array of strings obtained by splitting 's' using the character 'c' as a delimiter.
* `ft_itoa`: Allocates and returns a string representing the integer received as an argument.
* `ft_strmapi`: Applies the function 'f' to each character of the string 's' to create a new string.
* `ft_striteri`: Applies the function 'f' to each character of the string passed as argument.
* `ft_putchar_fd`: Outputs the character 'c' to the given file descriptor.
* `ft_putstr_fd`: Outputs the string 's' to the given file descriptor.
* `ft_putendl_fd`: Outputs the string 's' to the given file descriptor followed by a newline.
* `ft_putnbr_fd`: Outputs the integer 'n' to the given file descriptor.

### [cite_start]Bonus Part - Linked List Functions [cite: 191]
Functions to manipulate linked lists using the `t_list` structure:
* `ft_lstnew`: Creates a new node.
* `ft_lstadd_front`: Adds a node at the beginning of the list.
* `ft_lstsize`: Counts the number of nodes in the list.
* `ft_lstlast`: Returns the last node of the list.
* `ft_lstadd_back`: Adds a node at the end of the list.
* `ft_lstdelone`: Frees the content of a node.
* `ft_lstclear`: Deletes and frees a node and its successors.
* `ft_lstiter`: Iterates the list and applies a function to the content of each node.
* `ft_lstmap`: Iterates the list and applies a function to create a new list.

## Instructions

### Compilation
[cite_start]The project includes a Makefile with the following rules[cite: 27, 28]:

* `make`: Compiles the library and generates `libft.a`.
* `make clean`: Removes object files.
* `make fclean`: Removes object files and the library `libft.a`.
* `make re`: Recompiles the library (executes `fclean` and `make`).
* `make bonus`: Compiles the library including the bonus functions.

To use the library in your code, compile your source files with `libft.a`:
```bash
cc main.c -L. -lft -o program
