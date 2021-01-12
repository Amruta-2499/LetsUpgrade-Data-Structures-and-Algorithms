#include<stdio.h>
#include<stdlib.h>

void create(int);  
void begdelete(); 
void posdelete(int);

struct node{
    int data;
    struct node *next;
};

void printList(struct node *);
struct node *head;

int main(){
    struct node s;
    int choice,item,position;
    
    do{
        printf("\n1.Create a list\n2. Delete from beginning\n3.Delete from any position\n4.Print list\n5.Exit\nEnter your choice=");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                    printf("\nEnter data=");
                    scanf("%d",&item);
                    create(item);
                    break;
            case 2: 
                    begdelete();
                    break;
            case 3: 
                    printf("\nEnter position at which element to delete=");
                    scanf("%d",&position);
                    posdelete(position);
                    break;
            case 4: 
                    printList(head);
                    break;
            case 5: 
                    exit(0);        
            default:
                    printf("\nPlease enter valid choice");  
        }
    }while(choice!=3);
    return 0;
}


void create(int item){  
    struct node *ptr = (struct node *)malloc(sizeof(struct node *));  
    if(ptr == NULL)  
        printf("\nOVERFLOW");  
    else{  
        ptr->data = item;  
        ptr->next = head;  
        head = ptr;  
        printf("\nNode inserted");  
    }  
}  


void begdelete(){  
    struct node *ptr;  
    if(head == NULL)  
        printf("\nList is empty");  
    else{  
        ptr = head;  
        head = ptr->next;  
        free(ptr);  
        printf("\n Node deleted from the begining ...");  
    }  
}  


void posdelete(int position){  
    struct node *ptr;  
    if(head == NULL)  
        printf("\nList is empty");  
    struct node* temp=head;
    if(position==0){
        head=temp->next;
        free(temp);
        printf("\nElement at position %d is deleted",position);
    }
    for (int i=0; temp!=NULL && i<position-1; i++) 
        temp = temp->next; 
    if (temp == NULL || temp->next == NULL) 
        printf("\n%d position not exists",position); 
        
    struct node *next = temp->next->next; 
    free(temp->next);
    temp->next = next;
    printf("\nElement at position %d *** is deleted",position);
}  

void printList(struct node *node){ 
    while (node != NULL){ 
        printf(" %d ", node->data); 
        node = node->next; 
    } 
} 

