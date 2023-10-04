# **Double Circular Hook**

## **General**

<hr>
- Your programs and functions will be compiled with gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic
- All your files should end with a new line
- A README.md file, at the root of the folder of the project is mandatory
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- You are not allowed to use global variables
- No more than 5 functions per file
- The only C standard library functions **allowed are malloc, free, and strdup.** Any use of functions like printf, puts, calloc, realloc etc… is forbidden
- The prototypes of all your functions should be included in your header file called list.h
- All your header files should be include guarded

## **Tasks**

<hr>
**0. Add Nodes - mandatory** <br>

Create the source file 0-add_node.c that contains the following functions:

- Add a new node to the end of a double circular linked list:
- Prototype: List *add_node_end(List \*\*list, char *str);
- List: the list to modify
- str: the string to copy into the new node
- Returns: Address of the new node, or NULL on failure<br>
<hr>

- Add a new node to the beginning of a double circular linked list:
- Prototype: List *add_node_begin(List \*\*list, char *str);
- List: the list to modify
- str: the string to copy into the new node
- Returns: Address of the new node, or NULL on failure

<hr>
