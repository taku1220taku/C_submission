*This project has been created as part of the 42 curriculum by tkono.*

# ft_printf

## Description
The goal of this project is to create the `printf()` function from libc. This exercise provides an opportunity to discover variadic functions in C and creates a versatile printing tool that can be added to the generic `libft` library for future projects.

The function matches the original `printf` prototype:
```c
int ft_printf(const char *, ...);
```
The function handles the following conversion specifiers:

%c: Prints a single character.

%s: Prints a string.

%p: The void pointer argument is printed in hexadecimal format.

%d: Prints a decimal (base 10) number.

%i: Prints an integer in base 10.

%u: Prints an unsigned decimal (base 10) number.

%x: Prints a number in hexadecimal (base 16) lowercase format.

%X: Prints a number in hexadecimal (base 16) uppercase format.

%%: Prints a percent sign.

## Instructions
The project includes a Makefile with the following rules

* `make`: Compiles the library and generates `libft.a`.
* `make clean`: Removes object files.
* `make fclean`: Removes object files and the library `libft.a`.
* `make re`: Recompiles the library (executes `fclean` and `make`).

## Resources
https://qiita.com/subaruf/items/657c67a1809515589a7c
https://qiita.com/kamata-bug-factory/items/d74ecc0122c52f7526ef

AI was used to generate edge cases for testing the code.

## Algorithm and Data Structure

### Architectural Overview
The `ft_printf` function is designed as a direct-write implementation of the standard printf. It utilizes the `<stdarg.h>` library to handle variadic arguments and processes the format string in a single pass.

### Logic Flow

The execution flow is divided into three distinct phases: **Initialization**, **Parsing & Dispatch**, and **Numeric Recursion**.

#### 1. Main Loop & Parsing
The core logic resides in `ft_printf`, which iterates through the format string character by character:
* **Literal Processing**: If the current character is not a `%`, it is immediately written to the standard output, and the length counter is incremented.
* **Specifier Detection**: When a `%` is encountered, the function hands over control to the dispatcher (`ft_formats`) to handle the conversion.

#### 2. The Dispatcher (`ft_formats`)
Instead of a complex jump table, the `ft_formats` function uses a sequence of conditional statements (`if-else if`) to identify the specific conversion type (`c`, `s`, `p`, `d`, `i`, `u`, `x`, `X`, `%`).
* It retrieves the exact argument type from the `va_list` (e.g., `int`, `char *`, `unsigned int`) based on the detected flag.
* It delegates the actual printing task to specialized helper functions.

#### 3. Recursive Number Printing (`ft_putnbr_base`)
For all numeric conversions (decimal, unsigned, hexadecimal), a recursive algorithm is employed in `ft_putnbr_base`:
* **Base Agnostic**: The function accepts a base string (e.g., "0123456789" or "0123456789abcdef"), allowing a single function to handle `%d`, `%u`, `%x`, and `%X`.
* **Recursion**: The number is repeatedly divided by the base length until it is reduced to a single digit. The characters are then printed as the recursion unwinds. This approach eliminates the need for temporary string buffers or array allocation.

#### 4. Edge Case Management
The implementation includes robust handling for special cases:
* **Null Strings**: If a `%s` receives a `NULL` pointer, it explicitly prints `(null)`.
* **Null Pointers**: If a `%p` receives a `NULL` pointer, it prints `(nil)`.

### Data Structure Justification
* **`va_list`**: This is the mandatory data structure for accessing variadic arguments in C. It is used to traverse the stack of arguments sequentially.
* **Stack-Only Approach**: By using recursion for number printing and writing directly to stdout, the implementation avoids heap allocation (`malloc`) entirely. This ensures memory safety and simplifies the logic, as there is no buffer management overhead.
