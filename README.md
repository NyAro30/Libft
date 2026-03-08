*This project has been created as part of the 42 curriculum by mny-aro-.*

# 📖 Description
Libft is the first project of the 42 curriculum. It aims to build a C library containing a set of standard C functions (recoded from scratch) as well as additional utility functions. The goal of this project is to understand how these functions work internally, to learn strict coding rules (the "Norm"), and to create a toolkit that will be essential for future C projects at 42.

This library is divided into three main parts:

- Part 1: Standard Libc functions (string manipulation, memory handling, character classification).
- Part 2: Additional functions (string creation/modification and output functions).
- Part 3: Linked list manipulation functions.
# 🚀 Instructions
## Compilation
To compile the library, simply run the following command at the root of the repository:
```bash
make
```
This will generate the ```libft.a``` library file.

## Makefile Rules
The Makefile includes the following standard rules:

- `make` or `make all`: Compiles the library.
- `make clean`: Removes all object files (`*.o`).
- `make fclean`: Removes object files and the library (`libft.a`).
- `make re`: Performs `fclean` followed by `all`.
### Usage
To use this library in your own C project:

**1. Include the header file at the top of your source code:**
```c
c

#include "libft.h"
```
**2. Compile your project by linking the library. For example:**
```c
bash

cc -Wall -Wextra -Werror main.c libft.a -o my_program
```
## 📚 Library Content
#### Part 1 - Libc Functions
Reimplemented standard functions from `libc`. Function names are prefixed with `ft_`.

- Character Classification: `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`
- Memory Manipulation: `ft_memset,` `ft_bzero, ``ft_memcpy,` `ft_memmove`, `ft_memchr,` `ft_memcmp,` `ft_calloc`
- String Manipulation: `ft_strlen` , `ft_strlcpy`, `ft_strlcat`, `ft_strchr,` `ft_strrchr`, `ft_strnstr`, `ft_strncmp`, `ft_strdup,` `ft_atoi`
- Conversion: `ft_toupper`, `ft_tolower`
#### Part 2 - Additional Functions
Custom functions not included in the standard library, designed to simplify string operations and output handling.

- String Creation: `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_itoa`
- String Iteration/Modification: `ft_strmapi`, `ft_striteri`
- Output (File Descriptors): `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`
#### Part 3 - Linked List Functions
Functions to manipulate singly linked lists using the `t_list` structure.

- #### Structure:
```c
c

typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;
```
- Basic Operations: `ft_lstnew`, `ft_lstadd_front`, `ft_lstadd_back`, `ft_lstsize`, `ft_lstlast`
- Modification/Deletion: `ft_lstdelone`, `ft_lstclear`
- Iteration: `ft_lstiter`, `ft_lstmap`
# 🔗 Resources
## References
+ Google.
+ Youtube.
+ Geeks for Geeks.
+ Man Pages (Linux)
## AI Usage
I used AI tools to clarify key C concepts (such as memory allocation, pointers, and string manipulation) and to assist in drafting and structuring this README file. All the code implementation was written by myself based on this understanding.