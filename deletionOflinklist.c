#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
void transversal(struct Node *ptr){
    while (ptr != NULL)
    {
        printf("Element : %d\n",ptr->data);
        ptr = ptr->next;
        
    }
    printf("this Void Is running...");    
}
void deletingFirstNode(struct Node *head){
    struct Node *ptr = head;
    head = head->next;
    free(ptr);

}
struct Node *deletingBetweenNode(struct Node *head , int index){
    struct Node *p = head;
    struct Node *q = head->next;
    for (int i = 0; i < index-1; i++)
    {
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);
    return head;
    
    
}
void deletingLastNode(struct Node *head ){
    struct Node * p = head;

    while (p!=NULL)
    {
        p = p->next;
    }
    struct Node * q = p->next;
    q->next = p->next;
    free(q);

    
}
int main()
{
    
    
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
    struct Node *fifth;

    // Allocate memory for nodes in the linked list in Heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    // Link first and second nodes
    head->data = 7;
    head->next = second;

    // Link second and third nodes
    second->data = 11;
    second->next = third;

    // Link third and fourth nodes
    third->data = 41;
    third->next = fourth;

    // link fourth and fifth nodes
    fourth->data = 66;
    fourth->next = fifth;

    //Terminate The Process
    fifth->data = 78;
    fifth->next = NULL;
   // deletingFirstNode(head);
    //transversal(head);
    head = deletingBetweenNode(head,2);

    
    return 0;
}