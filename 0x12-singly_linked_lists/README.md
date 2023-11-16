# 0x12. C - Singly linked lists
A linked list is a collection of “nodes” connected together via links. These nodes consist of the data to be stored and a pointer to the address of the next node within the linked list. In the case of arrays, the size is limited to the definition, but in linked lists, there is no defined size. Any amount of data can be stored in it and can be deleted from it.

There are three types of linked lists −

1- Singly Linked List − The nodes only point to the address of the next node in the list.

2- Doubly Linked List − The nodes point to the addresses of both previous and next nodes.

3- Circular Linked List − The last node in the list will point to the first node in the list. It can either be singly linked or doubly linked.

## Singly Linked Lists
Singly linked lists contain two “buckets” in one node; one bucket holds the data and the other bucket holds the address of the next node of the list. Traversals can be done in one direction only as there is only a single link between two nodes of the same list.
Singly Linked Lists
## Basic Operations
 Operations in the Linked Lists

    1- Insertion − Adds an element at the beginning of the list.

    2- Deletion − Deletes an element at the beginning of the list.

    3- Display − Displays the complete list.

    4- Search − Searches an element using the given key.

    5- Delete − Deletes an element using the given key.
## When to Choose it

    1- When the developer needs constant time for insertion and deletion.
    2- When the data dynamically grows.
    3- Do not access random elements from the linked list.
    4- Insert the element in any position of the list.

## Files

|File|Description|
|---|---|
|0-print_list|function that prints all the elements of a list_t list|
|1-list_len|function that returns the number of elements in linked list_t list.|
|2-add_node|function that add a new node at the beginning of a list_t list.|
|3-add_node_end|function that adds a new node at the end of a list_t list.|
|4-free_list|function that frees a list_t list|
|100-first|function that prints string before the main function is executed.|
|101-hello_holberton.asm| a 64-bit program in assembly that prints Hello, Holberton, followed by a new line.|
# Compile command 
Each task number is assocaite with a test case file on the tests folder.

    $ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 tests/<test_number>-main.c <task_file>.c -o a