/*
 * Exercise 2: Stack Implementation using Linked List
 * Assignment 7 - IPFCE 2025
 * 
 * Implement all the stack functions declared in include/stack.h
 * The stack should be implemented using a linked list structure.
 * 
 * Functions to implement:
 * - initialize: Create an empty stack
 * - push: Insert an item at the top of the stack
 * - pop: Remove and return the top item
 * - full: Check if stack is full (always false for linked list)
 * - empty: Check if stack is empty
 * - print: Print all items in the stack
 */

#include "stack.h"

/* Create an empty stack */
void initialize(stack *s)
{
    s->head = NULL; 
}


void push(int x, stack *s)
{
    node *new_node = (node *)malloc(sizeof(node));

    if (new_node == NULL) return;

    new_node->data = x;
    new_node->next = s->head;
    s->head = new_node;
  

}


int pop(stack *s)
{
    int value = s->head->data;

    node *temp = s->head;
    s->head = s->head->next;
    
    free(temp);
    return value;

  return 0; 
}


bool full(stack *s)
{
    return false;
}

bool empty(stack *s)
{

    return (s->head == NULL);
    return false; 
}

void print(stack *s)
{
        printf("Stack: ");
    
    node *current = s->head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    
    printf("\n");
}
