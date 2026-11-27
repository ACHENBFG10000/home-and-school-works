*This project has been created as part of the 42 curriculum by achen.*

# Libft

## Description
**Libft** is the first project of the 42 Common Core. The goal is make All functions in this directory have names starting with `ft_` and have been successfully compiled with the flags ```-Wall -Wextra -Werror```.
<br>This project consists of three parts.

1. **Libc functions:**
Custom C library that re-implements standard C library functions(such as 'strlen', 'memcpy', 'atoi').

2. **Additional functions:**
Develop a set of functions that are either not included in
the libc, or exist in a different form.

3. **Linked list:**
Function for manipulating linked lists using dynamically allocated memory.


## Instructions

### Features
| Command       | Description |
| :---- | :---- |
| `make`        | Compiles the functions for to `.o` and creates `libft.a` |
| `make clean`  | Removes all `.o` object files.|
| `make fclean` | Removes all `.o` object files and `libft.a` library. |
| `make re`     | Runs `fclean` followed by `all` (`make`) |

### Steps to Use

1. Open your terminal and navigate to this directory.

2. Write command `make` press ENTER key, for creates `libft.a` file and the same function file but end with `.o`.

3. You can use `make clean` command to clean that files end with `.o`, because after we don't need.

4. To use this library, you need write header `#include "libft.h"` in your C project and when compile your C project must write `libft.a` back of your C programe.

Example:
```sh
cc -Wall -Wextra -Werror project.c libft.a
```

| Member | Description |
| :---- | :---- |
| `content` | A `void *` pointer to the data stored in this node. |
| `next` | The pointer of the next node, or NULL if the current node is the last one. |

## Description of the library

### Part 1 - Libc functions
| Function | Description |
| :---- | :---- |
| `ft_isalpha` | Checks  for an alphabetic character. If true retrun 1, if false return 0. |
| `ft_isdigit` | Checks for a digit. If true retrun 1, if false return 0. |
| `ft_isalnum` | Checks for an alphanumeric character. If true retrun 1, if false return 0. |
| `ft_isascii` | Checks whether the ASCII character set. If true retrun 1, if false return 0. |
| `ft_isprint` | Checks for any printable character including space. If true retrun 1, if false return 0. |
| `ft_strlen`  | Count the length of the string, excluding the terminating null byte ('\0'). |
| `ft_memset`  | Fills the first `n` bytes of the memory area pointed to by `s` with the constant byte `c`.|
| `ft_bzero`   | Fills the first n bytes of the memory area pointed to by `s` with '\0'.
| `ft_memcpy`  | Copies `n` bytes from memory area src to memory area dest.
| `ft_memmove` | Copies `n` bytes from memory area `src` to memory area `dest`, with safely handling overlapping memory. |
| `ft_strlcpy`| Copies up to size - 1 characters from the NUL-terminated string `src` to `dst` NUL-terminating the result. |
| `ft_strlcat` | Appends the NUL-terminated string `src` to the end of `dst`. It will append at most size - strlen(`dst`) - 1 bytes, NUL-terminating the result.
| `ft_toupper` | Returns its uppercase equivalent. |
| `ft_tolower` | Returns its lowercase equivalent. |
| `ft_strchr`  | Returns a pointer to the first occurrence of the character c in the string `s`.
| `ft_strrchr` | Returns a pointer to the last occurrence of the character `c` in the string `s`. |
| `ft_strncmp` | Compares only the  first  (at most) `n` bytes of `s1` and `s2`. |
| `ft_memchr`  | Scans the initial n bytes of the memory area pointed to by `s` for the first instance of `c`.  Both `c` and the bytes of  the  memory area pointed to by `s` are interpreted as unsigned char. |
| `ft_memcmp`  | Compares the first n bytes (each interpreted as unsigned char) of the memory areas `s1` and `s2`. |
| `ft_strnstr` | In ```big```, find the first occurrence of the string ```little``` and return a pointer to it. If it is not found, return NULL. The string ```little``` must end with `'\0'`, and its length must not exceed the length of `big` (excluding the terminating `'\0'`). |
| `ft_atoi`    | Converts the initial portion of the string pointed to by `nptr` to int. |
| `ft_calloc`  | Do same thing like malloc, but in the variable all is `'\0'`. |
| `ft_strdup`  | Allocate memory for a new string and return a copy of `s`. |

### Part 2 - Additional functions
| Function | description |
| :---- | :---- |
| `ft_substr` | Allocate memory and returns a substring of `s`. The substring starts at index `start` and has a maximum length of `len`. |
| `ft_strjoin` | Allocates memory and returns a new string, which is the result of concatenating `s1` and `s2`. |
| `ft_strtrim` | Allocates memory and returns a copy of `s1` with characters from `set` removed from the beginning and the end. |
| `ft_split` | Allocates memory and returns an array of strings obtained by splitting `s` using the character `c` as a delimiter. Each string in the returned array is allocated independently. The array of pointers itself is also dynamically allocated. The returned array will be NULL-terminated. |
| `ft_itoa`  | Allocates memory and returns a string representing the integer passed as an argument. It also  handle negative numbers. |
| `ft_strmapi` | Applies the function `f` to each character of the string `s`, passing its index as the first argument and the character itself as the second argument. A new string is created to store the results of successive applications of `f`. |
| `ft_striteri` | Applies the function `f` to each character of the string passed as argument, passing its index as the first argument. Each character is passed by address to `f` so it can be modified if necessary. |
| `ft_putchar_fd` | Outputs the character `c` to the specified file descriptor. |
| `ft_putstr_fd` | Outputs the string `s` to the specified file descriptor. |
| `ft_putendl_fd` | Outputs the string `s` to the specified file descriptor followed by a newline. |
| `ft_putnbr_fd` | Outputs the integer `n` to the specified file descriptor. |

### Part 3 - Link list
In part 3, linked list has definit using the `t_list` structure:
```c
typedef struct 	s_list
{
	void 			*content;
struct s_list 	*next;
} 				t_list;
```

| Function | description |
| :---- | :---- |
| `ft_lstnew` | Allocates memory and returns a new node. The pointer passed as the `content` parameter is assigned to the node's content field. The `next` field is initialized to `NULL`. |
| `ft_lstadd_front` | Adds the node `new` at the beginning of the list. |
| `ft_lstsize` | Counts the number of nodes in the list. |
| `ft_lstlast` | Returns the last node of the list. |
| `ft_lstadd_back` | Adds the node `new` at the end of the list. |
| `ft_lstdelone` | Takes a node as parameter and frees its content using the function `del`. Free the node itself but does NOT free the next node. |
| `ft_lstclear` | Deletes and frees the given node and all its successors, using the function `del` to free their `content`. Finally, sets the pointer to the list to `NULL`. |
| `ft_lstiter` | Iterates through the list `lst` and applies the function `f` to the content of each node.
| `ft_lstmap` | Iterates through the list `lst`, applies the function `f` to each nodes content, and creates a new list resulting of the successive applications of the function `f`. The `del` function is used to delete the content of a node if allocation fails. |

## Resources
### Documents
- Manual of Linux.
- [runoob.com](https://www.runoob.com/)

### Test tool
- Commant 
```sh
valgrind --leak-check=full
```
- [Claudenette](https://github.com/rabeloivan/claudenette)

### AI usage
- Information research and gathering.
- Error testing and edge case validation.
- Grammar correction and proofreading.