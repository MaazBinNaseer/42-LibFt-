# 42-LibFt- 
![image](https://user-images.githubusercontent.com/88405217/192701681-4ed74a77-859f-4993-a71f-57328145951c.png) ![image](https://user-images.githubusercontent.com/88405217/192702080-69faa195-e289-4b99-90c7-c02f712c02f3.png)

## :books: Creating our own library folder from start

### :exclamation: MANDATORY PART 
| S.No | **Function** | **Description** | 
|------|----------|-------------|
| 1.| [isAlnum](Libft/ft_isalnum.c) | Checks whether the string has alphabets and numbers; if true returns 1|
| 2.| [isAlpha](Libft/ft_isalpha.c) | Read the string: If there is alphabets- it should return the value of 1 |
| 3.| [isAscii](Libft/ft_isascii.c) | Returns 1 if c is an ASCII character; otherwise, zero |
| 4.| [isDigit](Libft/ft_isdigit.c)| Function isdigit() takes a single argument in the form of an integer and returns the value of type int|
| 5.| [isPrint](Libft/ft_isprint.c)| Returns 1 if the characet is printable| 
| 6.| [Bzero](Libft/ft_bzero.c)| Sets everything to zero |
| 7.| [Calloc](Libft/ft_calloc.c)| Allocates memory and sets the memory that has been allocated to zero|
| 8.| [Memcmp](Libft/ft_cmemcmp.c)| It checks for strings and returns the difference, it also checks for null space|
| 9.| [Memcpy](Libft/ft_memcpy.c)| Copies all the data from the **source** to the **destination** | 
|10.| [Memset](Libft/ft_memset.c)| Fills the block of memory or the string to a particular value |
|11.| [Memmove](Libft/ft_memmove.c) | Moves everythin from the **source** to the **destination**, handles overlap which memcpy cannot |
|12.| [Memchr](Libft/ft_memchr.c) | It will look for a character inside the string and returns character from that position of the character|
|13.| [Strchr](Libft/ft_strchr.c) | Looks for a specific character inside the string and returns the string from that character position | 
|14.| [Strrchr](Libft/ft_strrchr.c) | Looks for a specific character but the last character inside that string and returns that character/string|
|15.| [Strlen](Libft/ft_strlen.c) | Returns the string length | 
|16.| [Strncmp](Libft/ft_strncmp.c)| Compares not more than n characters. If found a difference within the n value, it will return the difference|
|17.| [Strrstr](Libft/ft_strrstr.c)| Returns the character inside the string where it last occured |
|18.| [Strnstr](Libft/ft_strnstr.c)| Looks for a string inside a source string and returns the string if found inside the source string|
|19.| [Split](Libft/ft_split.c) | Splits the strings into different positions| 
|20.| [Strdup](Libft/ft_strdup.c) | duplisubstrthe string from the source to the destination |
|21.| [Strjoin](Libft/ft_strjoin.c) | Joins both the source and destination string into another string (malloc) |
|22.| [Strlcat](Libft/ft_strlcat.c) | Returns both the source and destination string concatination, but with restrictions | 
|23.| [Strlcpy](Libft/ft_strlcpy.c)| Basically copies the source string to destination string but with a limitation of "how much to copy" |
|24.| [Strtrim](Libft/ft_strtrim.c) | Removes the string from the start and end, specified by the user| 
|25.| [Substr](Libft/ft_substr.c) | Subtracts the string given the parameters by the user. “We are going home” we specify where the index starting position is and we also assing n value to return that much of the string. Lets say start = 3 and n = 7, the function will return “are g” to be stored into another string(malloc) |
|26.| [Atoi](Libft/ft_atoi.c)| Converts string to integers value |
|27.| [Itoa](Libft/ft_itoa.c)| Converts integers to string literal |
|28.| [ToUpper](Libft/ft_toupper.c)| Converts the character to uppercase|
|29.| [ToLower](Libft/ft_tolower.c)| Converts the character to lowercase|
|30.| [Strmapi](Libft/ft_strmapi.c)| Change the character using the (f) function|
|31.| [Striteri](Libft/ft_striteri.c)| Changing the character through (f) function|
|32.| [Putchar_fd](Libft/ft_putchar_fd.c)| Outputs the character c to the given file descriptor| 
|33.| [Putstr_fd](Libft/ft_putstr_fd.c)| Outputs the string to the given file descriptor |
|34.| [Putendl_fd](Libft/ft_putendl_fd.c)| Outputs a string to the file descriptor but ends with a newline|
|35.| [Putnbr_fd](Libft/ft_putnbr_fd.c)| Outputs the integer n to given file descriptor 

---
### ✔️ BONUS PART 
| S.No | **Function** | **Description** | 
|------|----------|-------------|
|36. | [Lstnew](Libft/ft_lstnew.c)| Allocates a new node and variable next is initialized to Null| 
|37.| [Lstadd_front](Libft/ft_lstadd_front.c)| Adds the node new at the beginning of the list | 
|38.| [Lstsize](Libft/ft_lstsize.c)| Counts the number of nodes in a list |
|39.| [lstlast](Libft/ft_lstlast.c)| Returns the last node of the list| 
|40.| [lstadd_back](Libft/ft_lstadd_back.c)| Adds the node new at the end of the list |
|41.| [lstdelone](Libft/ft_lstdelone.c)| Free the node content using the delete and the next must not be freed|
|42.| [lstclear](Libft/ft_lstclear.c)| Deletes and frees the given node and every successor of that node, using the del and free|
|43.| [lstiter](Libft/ft_lstiter.c)| Iterates the list list and applies the function f on the content of each node. 
|44.| [lstmap](Libft/ft_lstmap.c)| Creates a new list and applies the function of the f on the content of each node. The del function is used to delete the content of a node if needed.|

--- 
## ✏️ THINGS TO READ ABOUT 

## 📄 MAKEFILE

<p align="center">
<img src= "https://user-images.githubusercontent.com/88405217/184244154-60f36c2b-ecb4-4c91-8044-2444367b03a8.jpg">
</p>

```C
//Generating an .O file 
clang/gcc -c file.c 
//Compressing all files together 
clang/gcc file1.o fil2.o -o file -l m 
```
## Understanding wildcards & phony

A single file name can specify many files using *wildcard characters*. The wildcard characters in `make` are ‘*’, ‘?’ and ‘[…]’, the same as in the Bourne shell. ***For example,*** *.c specifies a list of all the files (in the working directory) whose names end in ‘.c’.

The character ‘~’ at the beginning of a file name also has special significance. If alone, or followed by a slash, it represents your home directory. For example ~/bin expands to /home/you/bin. If the ‘~’ is followed by a word, the string represents the home directory of the user named by that word. For example ~john/bin expands to /home/john/bin. On systems which don’t have a home directory for each user (such as MS-DOS or MS-Windows), this functionality can be simulated by setting the environment variable *HOME*

## Wildcard examples
To set `objects`to the expansion, instead use:

```C
`**objects := $(wildcard *.o)

Some Wildcard Syntax:
$@ : The filename representing the target.
$^: the filenames of all the prerequisites, separated by spaces. 
This list has duplicate filenames removed since for most uses, such as compiling, copying, etc., duplicates are not wanted.

%.o:%.c -----> $(CC) $*(CFLAGS) -c -o ($@):targets %.o ($^):targets %.c
```
### Phony

A phony target is one that is not really the name of a file; rather it is just a name for a recipe to be executed when you make an explicit request. **There are two reasons to use a phony target: to avoid a conflict with a file of the same name, and to improve performance**

## Writing Rules in MakeFiles

c

Create the archive. The specified archive is always created if it did not exist, when you request an update. But a warning is issued unless you specify in advance that you expect to create it, by using this modifier.

r

Insert the files *member*... into archive (with replacement). This operation differs from q in that any previously existing members are deleted if their names match those being added.

s

Write an object-file index into the archive, or update an existing one, even if no other change is made to the archive. You may use this modifier flag either with any operation, or alone. Running "`ar s`" on an archive is equivalent to running [ranlib](http://unixhelp.ed.ac.uk/CGI/man-cgi?ranlib%201) on it.
Therefore, `rcs`can be seen to mean `replace, create, sort

```C
CFILES= $(wildcard ./*.c) //Gets all the .c files in the directory and stores it into the variable called CFILES //
$(NAME): $(OBJECTS)
	ar -rcs $(NAME) $(OBJECTS)
```
#### 📹 Markdown tutorial 
[![MARKDOWN TUTORIAL](http://img.youtube.com/vi/DtGrdB8wQ_8/0.jpg)](https://www.youtube.com/watch?v=DtGrdB8wQ_8)



