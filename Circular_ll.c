#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
void traversal(struct Node *head)
{   struct Node *ptr = head;
    
    
    do{
        printf("The Elements Are : %d\n ",ptr->data);
        ptr = ptr->next;
    
    }while (ptr != head);
}
struct Node * insertAtFirst(struct Node * head , int data){
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node *p = head->next;
    while (p->next != head)
    {
        p = p->next;
    }
    p->next  = ptr;
    ptr->next  = head;
    head=ptr;
    
}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *forth;

    /*head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    forth = (struct Node *)malloc(sizeof(struct Node));

    head->data = 4;
    head->next = second;

    second->data = 3;
    second->next = third;

    third->data = 6;
    third->next = forth;

    forth->data = 1;
    forth->next = head;

    traversal(head);
    printf("__________________________________________\n");
    //head = insertAtFirst(head , 80);
    head = insertAtEnd(head , 80);
    printf("__________________________________________\n");
    traversal(head);*/
    

    return 0;
}