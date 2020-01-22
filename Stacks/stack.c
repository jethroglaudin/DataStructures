#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


struct Stack {
    int  maxsize;
    int  *data;
    int  length;
};

struct Stack* newstack(int num)
{
    struct Stack *ptr = malloc(sizeof(struct Stack));

    ptr->maxsize = num;
    ptr->data = malloc(sizeof(int) * num);
    ptr->length = 0;

    return ptr;

}

int full(struct Stack *ptr)
{
    return ptr->length == ptr->maxsize - 1;
}

int isEmpty(struct Stack *ptr)
{
    return ptr->length == 0;
}

int top(struct Stack *ptr) 
{
    return ptr->data[ptr->length - 1];
}

void push(struct Stack *ptr, int x)
{
    if(full(ptr))
    {
        printf("You've reached the limit\n");
        exit(1);
    }
    printf("Inserting: %d\n", x);

    // add an element and increment the length
    ptr->data[ptr->length] = x;
    ptr->length++;
}

int peek(struct Stack *ptr)
{
    if(!isEmpty(ptr))
    {
        return ptr->data[ptr->length - 1];
    }
    else 
    {
        exit(2);
    }
}

int pop(struct Stack *ptr)
{
    // check if stack is empty
    if(isEmpty(ptr))
    {
        printf("Stack is Empty\n");
    }

    printf("Removing %d\n", peek(ptr));

    return ptr->data[ptr->length--];
}



int main(void)

{
    struct Stack *ptr = newstack(5);
    push(ptr, 10);
    push(ptr, 20);
    push(ptr, 30);

    printf("Top element is %d\n", peek(ptr));
    printf("Stack size is %d\n", ptr->length);
    printf("Is the stack full, %d\n", full(ptr));

    pop(ptr); // 30
    pop(ptr); // 20
    // pop(ptr); // 10
   

    // printf("%i",newStack->size);

    if (isEmpty(ptr))
        printf("Stack is empty\n");
    else
        printf("Stack is not empty\n");

    return 0;

    
}