#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Node structure
typedef struct Node
{
    int data;
    struct Node *next;
}Node;

int main(){

    Node* head = malloc(sizeof(Node));
    Node* tail = head;
    Node* current = head;

    srand(time(NULL));
    int r = rand() % 36;

    //Initializes head if r is not 35
    if (r != 35)
    {
        head->data = r;
        head->next = NULL;
    }else
        printf(" ");
    

    //Creates Linked List
    while (r != 35)
    {
        r = rand()% 36;

        if (r == 35)
        {
            break;
        }
        
        Node* newNode = malloc(sizeof(Node));
        newNode->next = NULL;
        newNode->data = r;

        tail->next = newNode;
        tail = newNode;
    }
    //Print and free linked list
    while (current != NULL)
    {
        printf("%d -> ", current->data);
        current = current->next;


        free(head);
        head = current;
         

    }
    //free(tail);
    //free(current);

    printf("NULL\n");


    return 0;
}