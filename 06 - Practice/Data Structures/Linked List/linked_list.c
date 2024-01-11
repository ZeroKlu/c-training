#include <stdio.h>
#include <stdlib.h>

// A node in the list
struct Node
{
    void *data;        // Pointer to data (can be any type)
    struct Node *next; // Pointer to next node in list
};

// Add a node to the beginning of the list
void push(struct Node **head_ref, void *new_data, size_t data_size)
{
    // Allocate the memory to store the node
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));

    new_node->data = malloc(data_size);
    new_node->next = (*head_ref);

    // Copy the node data into the allocated memory
    for (int i = 0; i < data_size; i++)
        *(char *)(new_node->data + i) = *(char *)(new_data + i);

    // Replace the head pointer to point to the new node
    (*head_ref) = new_node;
}

// Add a node to the beginning of the list
void append(struct Node **tail_ref, void *new_data, size_t data_size)
{
    // Allocate the memory to store the node
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));

    new_node->data = malloc(data_size);

    // Copy the node data into the allocated memory
    for (int i = 0; i < data_size; i++)
        *(char *)(new_node->data + i) = *(char *)(new_data + i);

    (*tail_ref)->next = new_node;

    *tail_ref = new_node;
}

// Add a node in the middle of the list - Need doubly-linked list
// void insert() {}

// Remove the node from the beginning of the list
void pop() {}

// Remove the node from the end of the list
void trim() {}

// Remove a node from the middle of the list - Need doubly-linked list
// void remove() {}

// Print all nodes in the list
void printList(struct Node *node, void (*fptr)(void *))
{
    while (node != NULL)
    {
        (*fptr)(node->data);
        node = node->next;
    }
}

// Function to print an integer
void printInt(void *n)
{
    printf(" %d", *(int *)n);
}

// Function to print a float
void printFloat(void *f)
{
    printf(" %f", *(float *)f);
}

int main()
{
    struct Node *start = NULL;

    // Create and print an int linked list
    unsigned int_size = sizeof(int);
    int arr[] = {10, 20, 30, 40, 50}, i;
    for (i = 4; i >= 0; i--)
        push(&start, &arr[i], int_size);
    printf("Created integer linked list is \n");
    printList(start, printInt);

    // Create and print a float linked list
    unsigned float_size = sizeof(float);
    start = NULL;
    float arr2[] = {10.1, 20.2, 30.3, 40.4, 50.5};
    for (i = 4; i >= 0; i--)
        push(&start, &arr2[i], float_size);
    printf("\n\nCreated float linked list is \n");
    printList(start, printFloat);

    return 0;
}
