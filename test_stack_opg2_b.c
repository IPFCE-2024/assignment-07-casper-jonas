#include <assert.h>
#include <stdio.h>
#include "stack.h"


int main () {

    {
    stack s;

    initialize(&s);
    assert (empty(&s) == true );

    printf("lov 1. godekndt\n");
   } 


   {
    stack s;

    initialize(&s);

    push (5, &s);
    push (7, &s);

    int x = 42;
    push(x, &s);
    int y = pop(&s);

    assert (x == y);
    assert (pop(&s) == 7);
    assert (pop(&s) == 5);
    assert (empty(&s) == true);

    printf("lov 2. godkendt\n");

   }

   {
    stack s;

    initialize(&s);

    int x0 = 100;
    int x1 = 200;

    push(x0, &s);
    push(x1, &s);

    int y0 = pop(&s);
    int y1 = pop(&s);

    assert(x1 == y0);
    assert(x0 == y1);
    assert(empty(&s) == true);

    printf("lov 3. godkendt\n");
   }

  printf("\n alle tre love, godkendt \n"); 
}
