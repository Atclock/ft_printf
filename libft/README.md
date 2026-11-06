*This project has been created as part of the 42 curriculum by yabuzano.*

# Libft

## Description

Libft is a C library created as part of the 42 curriculum. It reimplements a collection of essential functions from the C standard library and adds several utility functions that can be reused in future 42 projects.

The goal of the project is to strengthen the foundations of C programming and systems programming by working directly with strings, memory, dynamic allocation, file descriptors, function pointers, and linked lists.

The library is compiled into the static archive:

```text
libft.a
```

This allows its functions to be linked and reused in other C projects without rewriting the same utilities each time.

## Library Description

The library is divided into three main groups: reimplemented libc functions, additional utility functions, and linked-list functions.

### Libc Reimplementations

This section recreates commonly used functions from the C standard library while preserving their expected behavior.

The functions cover:

- Character classification and conversion.
- String length, searching, comparison, and copying.
- Raw memory manipulation and comparison.
- String-to-integer conversion.
- Dynamic memory allocation and string duplication.

Included functions:

- Character functions: `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower`
- String functions: `ft_strlen`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strlcpy`, `ft_strlcat`, `ft_strnstr`, `ft_atoi`, `ft_strdup`
- Memory functions: `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc`

These functions provide the low-level building blocks used by many of the higher-level functions in the rest of the library.

### Additional Utility Functions

This section contains functions that either do not exist directly in libc or provide functionality in a different form.

They perform tasks such as:

- Extracting a substring from a string.
- Joining two strings into a newly allocated string.
- Trimming selected characters from the beginning and end of a string.
- Splitting a string into an array of strings using a delimiter.
- Converting an integer into its string representation.
- Applying callback functions to characters in a string.
- Writing characters, strings, and integers to a specified file descriptor.

Included functions:

- `ft_substr`
- `ft_strjoin`
- `ft_strtrim`
- `ft_split`
- `ft_itoa`
- `ft_strmapi`
- `ft_striteri`
- `ft_putchar_fd`
- `ft_putstr_fd`
- `ft_putendl_fd`
- `ft_putnbr_fd`

Several of these functions allocate new memory, so the returned memory must be freed by the caller when it is no longer needed.

### Linked List Functions

Libft also defines a singly linked-list structure named `t_list`.

Each node stores:

- A `void *content` pointer, allowing the node to store generic data.
- A `next` pointer containing the address of the following node, or `NULL` for the final node.

The linked-list functions allow nodes to be created, added to the front or back of a list, counted, traversed, transformed, and deleted.

Included functions:

- `ft_lstnew`
- `ft_lstadd_front`
- `ft_lstsize`
- `ft_lstlast`
- `ft_lstadd_back`
- `ft_lstdelone`
- `ft_lstclear`
- `ft_lstiter`
- `ft_lstmap`

This section introduces reusable data structures, dynamic memory management, function pointers, and ownership of dynamically allocated data.

## Instructions

A `Makefile` is provided to compile the source files and create the `libft.a` static library.

### Build the library

```bash
make
```

Compiles the required source files into object files and creates `libft.a`.

### Remove object files

```bash
make clean
```

Removes all generated `.o` object files while keeping `libft.a`.

### Remove all generated files

```bash
make fclean
```

Removes all object files and the `libft.a` archive.

### Rebuild the library

```bash
make re
```

Runs a full clean and recompiles the entire library.

## Resources

The following resources were used while working on the project:

- [Linux man pages](https://linux.die.net/man/)
- [ASCII Code](https://www.ascii-code.com/)
- [GeeksforGeeks - C Programming Language](https://www.geeksforgeeks.org/c/c-programming-language/)

## AI Usage

AI was used as a learning and mentoring tool during the project.

It was used to:

- Explain unfamiliar C concepts.
- Explain how object files, static libraries, linking, and Makefiles work.
- Clarify Norminette formatting rules.
- Help design testing strategies and identify useful edge cases.
- Review README structure and documentation requirements.

The project functions themselves were implemented by the student rather than generated as complete solutions by AI.
