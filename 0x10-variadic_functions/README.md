# 0x10. C - Variadic functions

## Learning Objectives

At the end of this project, you are expected to be able to explain to anyone, **without the help of Google**:

### General

1. What are variadic functions?
> These are functions that can take in a variable number of arguments of different types.
2. How to use `va_start`, `va_arg` and `va_end` macros?
> We use `va_start` to access the variable arguments passed to a variadic function
> When called upon,`va_arg` is used to access the next argument
> `va_end` is called upon to close (clean up) `va_list` object.
3. Why and how to use the `const` type qualifier?
> The `const` identifier is a type qualifier that is used to indicate that a variable or function parameter is read-only and cannot be modified by the program.
> Example of declaring a constant float variable:
> `const float PI = 3.14159;`
---
### Tasks

> A function that returns the sum of all its parameters:
0. [0-sum\_them\_all.c](https://github.com/Jarabi/alx-low_level_programming/blob/main/0x10-variadic_functions/0-sum_them_all.c)
> A function that prints numbers, followed by a new line:
1. [1-print\_numbers.c] (https://github.com/Jarabi/alx-low_level_programming/blob/main/0x10-variadic_functions/1-print_numbers.c)
> A function that prints strings, followed by a new line:
2. [2-print\_strings.c](https://github.com/Jarabi/alx-low_level_programming/blob/main/0x10-variadic_functions/2-print_strings.c)
> A function that prints anything:
3. [3-print\_all.c](https://github.com/Jarabi/alx-low_level_programming/blob/main/0x10-variadic_functions/3-print_all.c)
---
