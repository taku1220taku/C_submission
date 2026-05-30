*This project has been created as part of the 42 curriculum by tkono.*

# push_swap

## Description
The `push_swap` project is a highly structured algorithmic challenge that requires sorting data on a stack, with a limited set of instructions, using the lowest possible number of actions. The goal is to write a C program that calculates and displays the shortest sequence of Push_swap instructions to sort a random list of integers in ascending order. This project emphasizes algorithmic efficiency, complexity analysis, and robust memory management in C.

## Instructions
### Compilation
A `Makefile` is provided to compile the source files. It adheres strictly to the required rules.

```bash
# Compile the executable 'push_swap'
make

# Remove object files
make clean

# Remove object files and the executable
make fclean

# Recompile the program entirely
make re
```
## Resources
https://tukumolog.com/radix-sort-introduction/

AI Usage: Gemini was used.
Engaged in discussions regarding the mathematical proof of bitwise operations for finding maximum bits, optimizing the time complexity of duplicate checks from $\mathcal{O}(N^2)$ to $\mathcal{O}(N \log N)$, and refactoring long functions to adhere strictly to the 25-line Norminette constraint.

## Usage Examples
Run the program by passing a list of integers as arguments. The program will output the sequence of operations required to sort the stack.


### Example with multiple arguments
./push_swap 2 1 3 6 5 8

### Example with a single formatted string argument
./push_swap "4 67 3 87 23"

### Counting the operations
ARG="4 67 3 87 23"; ./push_swap $ARG | wc -l

## Technical Choices
To ensure strict compliance with performance benchmarks and error management requirements, the following architectural and algorithmic choices were made:

* **Data Structure:** A circular doubly linked list is implemented to allow $\mathcal{O}(1)$ time complexity for all required stack operations, such as rotation (`ra`, `rb`) and reverse rotation (`rra`, `rrb`).
* **Large Scale Sorting (N > 5):** A combination of **Coordinate Compression** and **Base-2 Radix Sort**. The algorithm first maps the input integers to their relative ranks ($0$ to $N-1$) in $\mathcal{O}(N \log N)$ time, preventing issues with negative numbers and large variance. Then, it sorts the elements bit by bit, moving $0$s to stack B and keeping $1$s in stack A.
* **Small Scale Sorting (N $\le$ 5):** An optimized, hard-coded Insertion Sort approach is used to ensure the operations stay well below the strict limits.
* **Error Handling:** The input validation parser uses rigorous digit checks, arithmetic overflow detection (preventing undefined behavior in `long` conversions), and duplication checks running on the sorted auxiliary array to achieve robust safety.

## Feature List
* **Comprehensive Error Management:** Safely handles non-numeric inputs, duplicates, values exceeding integer limits (including `long` overflow prevention), and complex string parsing (e.g., `"-1 2 3"` vs `"-1" "2" "3"`).
* **Memory Safety:** Strictly adheres to proper memory management. All allocated memory (linked lists, temporary arrays) is reliably freed regardless of success or failure execution paths, ensuring zero memory leaks.
* **Dynamic Algorithm Routing:** Automatically selects the most optimized sorting strategy based on the number of inputs (e.g., specifically hardcoded logic for 2, 3, 4, and 5 elements, and Radix Sort for larger datasets).
