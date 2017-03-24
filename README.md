<img src="https://www.holbertonschool.com/assets/holberton-logo-1cc451260ca3cd297def53f2250a9794810667c7ca7b5fa5879a569a457bf16f.png" alt="Holberton logo">

# wind-waker : "link"ed list reversal
## Author: Bobby Yang (Batch 2)

<img src="https://holberton-students.slack.com/files/bobstermyang/F4NURGNRH/linkedlist.png" alt="Linked List">

## Synopsis
This program is an expansion of Holberton School's Linked List assignment. This program creates a regular linked list, prints it out then reverses the string and prints it out.


## File Breakdown
### link.h
This is a header file that includes the base struct for a linked list.

```c
typedef struct link
{
	int value;
	struct link *next;
} link;
```
- `@value` is an int value stored in the list

- `@next` is a pointer to the next node of the list

### add_end_node.c
This file contains a function called `add_end_node` that addes a new node to the end of a "link"ed list.
```c
void add_node_end(link **head, int s);
```
This function addes a new node to the end of a "link"ed list.

- `@head` is the address of a pointer to the head of a "link"ed list.
- `@s` is the value that gets stored into the node

### print_list.c
This file contains a function called `print_list` that prints a "link"ed list.
```c
void print_list(link *head);
```
This function prints a "link"ed list.
- `@head` is the pointer that points to the beginning of a "link"ed list

### rev_list.c
This file contains a function that reverses a "link"ed list.
```c
link *rev_list(link *head);
```
This function reverses a "link"ed list and returns a pointer to that reversed list.
- `@head` is the pointer to the head of "link"ed list.

### main.c
This file is a test file that creates a 20 node "link"ed list with the index stored in the `value`, prints the "lik"ed list, reversed the list, then prints the reversed list.

## Using
You can test the main.c file by running:
```bash
$ gcc -Wall -pedantic -Werror -Wextra -g main.c add_end_node.c print_list.c rev_list.c -o wind-waker
$ ./wind-waker
```

## TODO
- [ ] Get Julien to say I did a good job ;)