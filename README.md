# Libft - 42 Standard C Library

## Overview

`libft` is a custom implementation of several standard C library functions, as well as additional utilities and linked list manipulation functions. This library serves as a foundation for understanding low-level memory handling, string operations, and data structure implementation in C. It is commonly used in early projects at [42] to reinforce core programming concepts.

---

## Memory Functions

| Function         | Description                                           |
|------------------|-------------------------------------------------------|
| `ft_bzero`       | Sets memory to zero                                   |
| `ft_calloc`      | Allocates and zero-initializes memory                 |
| `ft_memchr`      | Scans memory for a byte                               |
| `ft_memcmp`      | Compares two memory areas                             |
| `ft_memcpy`      | Copies memory area                                    |
| `ft_memmove`     | Copies memory safely, even with overlapping regions   |
| `ft_memset`      | Fills memory with a byte value                        |

---

## String Functions

| Function         | Description                                           |
|------------------|-------------------------------------------------------|
| `ft_strlen`      | Computes length of a string                           |
| `ft_strdup`      | Duplicates a string                                   |
| `ft_strchr`      | Finds a character in a string (first occurrence)      |
| `ft_strrchr`     | Finds a character in a string (last occurrence)       |
| `ft_strncmp`     | Compares two strings up to `n` bytes                  |
| `ft_strlcpy`     | Safe copy from string                                 |
| `ft_strlcat`     | Safe concatenation of strings                         |
| `ft_strnstr`     | Finds a substring within length `len`                 |

---

## Character Checks

| Function         | Description                                           |
|------------------|-------------------------------------------------------|
| `ft_isalpha`     | Checks if character is alphabetic                     |
| `ft_isdigit`     | Checks if character is a digit                        |
| `ft_isalnum`     | Checks if character is alphanumeric                   |
| `ft_isascii`     | Checks if character is an ASCII character             |
| `ft_isprint`     | Checks if character is printable                      |
| `ft_toupper`     | Converts to uppercase                                 |
| `ft_tolower`     | Converts to lowercase                                 |

---

## Conversions

| Function         | Description                                           |
|------------------|-------------------------------------------------------|
| `ft_atoi`        | Converts a string to an integer                       |
| `ft_itoa`        | Converts an integer to a string                       |

---

## File Descriptor Output

| Function         | Description                                           |
|------------------|-------------------------------------------------------|
| `ft_putchar_fd`  | Writes a character to a given file descriptor         |
| `ft_putstr_fd`   | Writes a string to a file descriptor                  |
| `ft_putendl_fd`  | Writes a string followed by a newline to a FD        |
| `ft_putnbr_fd`   | Writes an integer to a file descriptor                |

---

## String Manipulation

| Function         | Description                                           |
|------------------|-------------------------------------------------------|
| `ft_substr`      | Extracts a substring from a string                    |
| `ft_strjoin`     | Concatenates two strings                              |
| `ft_strtrim`     | Trims characters from start and end of string         |
| `ft_split`       | Splits a string using a delimiter                     |
| `ft_strmapi`     | Applies function to each character of a string        |
| `ft_striteri`    | Applies function to each character (by reference)     |

---

## Linked List Functions

The linked list uses the following structure:

```c
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;
````

| Function          | Description                                         |
| ----------------- | --------------------------------------------------- |
| `ft_lstnew`       | Creates a new list node                             |
| `ft_lstadd_front` | Adds a node at the beginning of the list            |
| `ft_lstsize`      | Returns the size of the list                        |
| `ft_lstlast`      | Returns the last node of the list                   |
| `ft_lstadd_back`  | Adds a node at the end of the list                  |
| `ft_lstdelone`    | Deletes a node and frees its content                |
| `ft_lstclear`     | Clears and frees an entire list                     |
| `ft_lstiter`      | Iterates over the list and applies a function       |
| `ft_lstmap`       | Maps a function to each node and creates a new list |

---

## License

This library is developed as part of the 42 cursus and is intended for educational use.
You are free to reuse, modify, or distribute it with proper attribution.

---