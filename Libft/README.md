*This project has been created as part of the 42 curriculum by achen.*

# Libft

## Description
**Libft** is the first project of 42 Common Core, all functions of this directory start from ```ft_```. This project consists of three parts.

1. **Libc functions:**
Custom C library that re-implements standard C library functions(such as 'strlen', 'memcpy', 'atoi').

2. **Additional functions:**
Develop a set of functions that are either not included in
the libc, or exist in a different form.

3. **linked list:**
Function for manipulating linked lists using dynamically allocated memory.


## Instructions

### Features
| Command       | Description |
| - | - |
| `make`        | Compiles the functions for to ```.o``` and creates `libft.a` |
| `make clean`  | Removes all ```.o``` object files.|
| `make fclean` | Removes all ```.o``` object files and `libft.a` library. |
| `make re`     | Runs `fclean` followed by `all` (`make`) |

### Steps to Use

1. Open your terminal and navigate to this directory.

2. Write command ```make``` press ENTER key, for creates ```libft.a``` file and the same function file but end with ```.o```.

3. You can use ```make clean``` command to clean that files end with ```.o```, because after we don't need.

4. To use this library, you need write header ```#include "libft.h"``` in your C project and when compile your C project must write ```libft.a``` back of your C programe.

Example:
```sh
cc -Wall -Wextra -Werror project.c libft.a
```

### Link list
On part 3, link list has definit using the ```t_list``` structure:
```c
typedef struct 	s_list
{
	void 			*content;
struct s_list 	*next;
} 				t_list;
```
| Member | Description |
| - | - |
| `content` | A ```void *``` pointer to the data stored in this node. |
| `next` | The pointer of the next node, or NULL if the current node is the last one. |

## Description of the library

### Prat 1 - Libc functions
| Function | descrip |
| - | - |
| `ft_isalpha` | Checks  for an alphabetic character. |
| `ft_isdigit` | Checks for a digit. |
| `ft_isalnum` | Checks for an alphanumeric character. |
| `ft_isascii` | Checks whether the ASCII character set. |
| `ft_isprint` | Checks for any printable character including space. |
| `ft_strlen`  | Count the length of the string, excluding the terminating null byte ('\0') |
| `ft_memset`  | Fills the first n bytes of the memory area pointed to by s with the constant byte c.|
| `ft_bzero`   | Fills the first n bytes of the memory area pointed to by s with '\0'.
| `ft_memcpy`  | Copies n bytes from memory area src to memory area dest.
| `ft_memmove` | Copies n bytes from memory area src to memory area dest, with safely handling overlapping memory. |
| `ft_ strlcpy`| Copies up to size - 1 characters from the NUL-terminated string src to dst NUL-terminating the result. |
| `ft_strlcat` | Appends the NUL-terminated string src to the end of dst. It will append at most size - strlen(dst) - 1 bytes, NUL-terminating the result.
| `ft_toupper` | Returns its uppercase equivalent. |
| `ft_tolower` | Returns its  lowercase  equivalent. |
| `ft_strchr`  | Returns a pointer to the first occurrence of the character c in the string s.
| `ft_strrchr` | Returns a pointer to the last occurrence of the character c in the string s. |
| `ft_strncmp` | Compares only the  first  (at most) n bytes of s1 and s2. |
| `ft_memchr`  | Scans the initial n bytes of the memory area pointed to by s for the first instance of c.  Both c and the bytes of  the  memory area pointed to by s are interpreted as unsigned char. |
| `ft_memcmp`  | Compares the first n bytes (each interpreted as unsigned char) of the memory areas s1 and s2. |
| `ft_strnstr` | The strnstr() function locates the first occurrence of the null-terminated string little in the string big, where not more than len characters are searched.  Characters that appear after a '\0' character are not searched. Since the strnstr() function is a FreeBSD specific API, it should only be used when portability is not a concern. |
| `ft_atoi`    | converts the initial portion of the string pointed to by nptr to int. |



## Resources
- man of terminal.
- runoob.com
- AI - searching information, error testing, edge cases.