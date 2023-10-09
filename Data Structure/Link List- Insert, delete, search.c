
#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
}*head;

void createlist(int n){
    struct node *newnode, *temp;
    head = (struct node*) malloc(sizeof(struct node));
    printf("Enter the value of first node\n");
    scanf("%d", &head->data);
    head->next = NULL;
    temp = head;
    for(int i=1; i<n; i++){
        newnode = (struct node*) malloc(sizeof(struct node));
        printf("Enter node-%d data\n", i+1);
        scanf("%d", &newnode->data);
        newnode->next = NULL;
        temp->next=newnode;
        temp = newnode;
    }
}

void displaylist(){
    struct node *temp;
    temp=head;
    printf("Display list\n");
    while(temp!=NULL){
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}

void searchinginlist(int searchitem)
{
    struct node *temp;
    temp=head;
    while(temp!=NULL){
        if(temp->data==searchitem){
            printf("Search Item Found\n");
            break;
        }
        else{
            temp = temp->next;
        }
    }
    if(temp==NULL){
        printf("Search Item Not Found\n");
    }
}

void InsertBegin(){
    struct node *newnode;
    newnode = (struct node*) malloc(sizeof(struct node));
    printf("Enter the value you want to insert at beginning\n");
    scanf("%d", &newnode->data);
    newnode->next=head;
    head=newnode;

}

void InsertEnd(){
    struct node *newnode, *temp;
    temp=head;
    while(temp->next!=NULL){
            temp=temp->next;
    }
    newnode = (struct node*) malloc(sizeof(struct node));
    printf("Enter the value you want to insert at end\n");
    scanf("%d", &newnode->data);
    newnode->next=NULL;
    temp->next=newnode;
}

void InsertMid(int position){
    struct node *newnode, *temp;
    temp=head;
    for(int i=1; i<position-1; i++){
        temp=temp->next;
    }
    newnode = (struct node*) malloc(sizeof(struct node));
    printf("Enter the value you want to insert at %d no position\n", position);
    scanf("%d", &newnode->data);
    newnode->next=temp->next;
    temp->next=newnode;
}

void deletefrombegin()
{
    struct node *temp;
    temp=head;
    head=head->next;
    free(temp);
}

void deletefromend()
{
    struct node *temp, *prev;
    temp=head;
    while(temp!=NULL){
            prev=temp;
            temp=temp->next;
    }
    prev->next=NULL;
    free(temp);
}
void deletefrommid(int position)
{
    struct node *temp, *prev;
    temp=head;
    for(int i=1; i<position; i++){
        prev=temp;
        temp=temp->next;
    }
    prev->next=temp->next;
    free(temp);
}

int main()
{
    int n, item, pos, value;
    printf("Enter the number of nodes in the list\n");
    scanf("%d", &n);
    createlist(n);
    displaylist();
    printf("The value you want to search in the list\n");
    scanf("%d", &item);
    searchinginlist(item);
    InsertBegin();
    displaylist();
    InsertEnd();
    displaylist();
    printf("Enter what position you want to add new data: ");
    scanf("%d", &pos);
    InsertMid(pos);
    displaylist();
    deletefrombegin();
    displaylist();
    deletefromend();
    displaylist();
    printf("Enter what position you want to delete data: ");
    scanf("%d", &pos);
    deletefrommid(pos);
    displaylist();
    return 0;
}

