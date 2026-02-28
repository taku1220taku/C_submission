*This project has been created as part of the 42 curriculum by tkono.*

## Description
**get_next_line** is a C function that reads a file descriptor line by line. The goal of this project is to introduce the concept of static variables, dynamic memory allocation, and robust file reading in C.

The function reads text from a file descriptor (`fd`) and returns one line at a time, including the newline character (`\n`), until the end of the file (EOF) is reached. It is designed to handle multiple calls smoothly, preserving the unread leftover data between function calls without causing memory leaks or segmentation faults, regardless of the specified `BUFFER_SIZE`.

## Instructions
### Compilation
The project does not require a Makefile for its core files, but it must be compiled alongside a main program. You can compile the function by adding the source files and specifying a `BUFFER_SIZE` flag.

```
cc -Wall -Wextra -Werror -D BUFFER_SIZE=42 get_next_line.c get_next_line_utils.c main.c -o gnl
Note: If no BUFFER_SIZE is specified, it will default to 42 as defined in the header.
```

### Execution
After compiling with your own main.c (which should open a file and call get_next_line in a loop), run the executable:

./gnl [target_file.txt]
Algorithm Explanation and Justification
The project relies on a modular approach using a single static char *save to persist data between calls. The algorithm is divided into three distinct phases to ensure clarity, safety, and adherence to the 42 Norm (25 lines maximum per function):

## Resources
AI Usage
Artificial Intelligence (Google Gemini) was utilized during the development of this project for the following tasks:

Debugging and Edge Cases: AI was used to trace the logical flow of segmentation faults and memory leaks

## Detailed explanation and justification of the algorithm

### read_and_join (Data Accumulation):
The function repeatedly reads BUFFER_SIZE bytes from the file descriptor into a temporary buffer. After each read, it dynamically concatenates the new buffer with the existing save variable using ft_strjoin. This loop continues until a newline character (\n) is found in save or EOF is reached.
#### Justification:
 By checking for errors (read returning -1 or malloc failing) and centralizing the state into a single rd flag, we prevent memory leaks during extreme stress tests (e.g., Francinette's NULL_CHECK).

### extract_line (Line Extraction):
Once the loop finishes, this function parses save to find the exact length of the line up to the first \n (inclusive). It uses ft_substr to allocate and return only the requested line.
#### Justification:
Delegating this to ft_substr keeps the logic minimal and robust against off-by-one errors.

### clean_save (State Maintenance):
This function takes the remaining characters in save (everything after the first \n) and stores them in a new allocated string. The old save is then freed, and the new string takes its place for the next function call. If no characters are left, it safely frees the pointer and returns NULL.
#### Justification:
This ensures that memory is strictly managed. Leftover data is preserved for the next call, and memory is promptly freed when the file is fully processed, preventing leaks.
