#include <stdio.h>
#include <stdlib.h>
#define true 1
#define false 0
typedef struct NODE
{
    int value;
    struct NODE *next;
} NODE;
void addNode(int value, NODE *root)
{
    NODE *newNode = malloc(sizeof(NODE));
    newNode->value = value;
    newNode->next = NULL;
    //navigate to end of list
    NODE *trav = root;
    while (trav->next != NULL)
    {
        trav = trav->next;
    }
    trav->next = newNode;
}

void displayList(NODE *root)
{
    NODE *trav = root;
    while (trav->next != NULL)
    {
        printf("%i, ", trav->value);
        trav = trav->next;
    }
    printf("%i\n", trav->value);

}
int main(void)
{
    NODE rootNode;
    rootNode.value = 5;
    rootNode.next = NULL;
    addNode(8, &rootNode);
    addNode(4, &rootNode);
    // printf("%i\n", rootNode.value);
    // printf("%i\n", rootNode.next->value);
    // printf("%i\n", rootNode.next->next->value);
    displayList(&rootNode);
}

