*This project has been created as part of the 42 curriculum by amghazar.*

# Libft

## Description

Libft is a custom C library created as part of the 42 curriculum.
The project reimplements standard C library functions and adds utility functions to improve understanding of memory management, string manipulation, and low-level programming. It also includes linked list management functions. 
This library can be reused in future projects.

## Instructions

### Compilation

To compile the library, run:

```bash
make
```

This will generate the static library:

```bash
libft.a
```

### Cleaning

To remove object files:

```bash
make clean
```

To remove object files and the library:

```bash
make fclean
```

To recompile everything:

```bash
make re
```

### Usage

Include the header file in your source code:

```c
#include "libft.h"
```

Compile your program with the library:

```bash
gcc main.c libft.a
```

Or link with the library path:

```bash
gcc main.c -L. -lft
```

## Library Description

### Part 1 – Libc Functions

* `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`
* `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strnstr`, `ft_strncmp`
* `ft_atoi`
* `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`
* `ft_toupper`, `ft_tolower`
* `ft_calloc`, `ft_strdup`

### Part 2 – Additional Functions

* `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`
* `ft_itoa`, `ft_strmapi`, `ft_striteri`
* `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`

### Part 3 – Linked List Functions

* `ft_lstnew`, `ft_lstadd_front`, `ft_lstadd_back`
* `ft_lstsize`, `ft_lstlast`
* `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`

## Resources

* Building and Testing the libc: [https://libc.llvm.org/build_and_test.html#](https://libc.llvm.org/build_and_test.html#)
* GeeksforGeeks: [https://www.geeksforgeeks.org](https://www.geeksforgeeks.org)
* Debian Manpages: [https://manpages.debian.org](https://manpages.debian.org)
* IBM Documentation: [https://www.ibm.com/docs/en/i/7.6.0?topic=functions-library](https://www.ibm.com/docs/en/i/7.6.0?topic=functions-library)
* Understand the whole C and C++ compilation process: [https://www.youtube.com/watch?v=ksJ9bdSX5Yo&pp](https://www.youtube.com/watch?v=ksJ9bdSX5Yo&pp)

### Use of Artificial Intelligence

AI tools were used to:

* Understand function behavior
* Clarify edge cases

All implementations and logic were tested by the author.
