# 0x10. C - Variadic functions

## Learning Objectives

At the end of this project, you are expected to be able to explain to anyone, **without the help of Google**:

### General

1. What are variadic functions?
> These are functions that can take in a variable number of arguments of different types.
2. How to use **va_start**, **va_arg** and **va_end** macros?
> We use `va_start` to access the variable arguments passed to a variadic function
> When called upon,`va_arg` is used to access the next argument
> `va_end` is called upon to close (clean up) `va_list` object.
3. Why and how to use the **const** type qualifier?
> The `const` identifier is a type qualifier that is used to indicate that a variable or function parameter is read-only and cannot be modified by the program.
> Example of declaring a constant float variable: `const float PI = 3.14159;`
