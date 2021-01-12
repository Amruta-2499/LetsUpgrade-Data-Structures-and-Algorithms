
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