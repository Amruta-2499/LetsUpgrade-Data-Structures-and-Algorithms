
void end_delete(){  
    struct node *ptr,*ptr1;  
    if(head == NULL){  
        printf("\nlist is empty");  
          
    else if(head -> next == NULL){  
        head = NULL;  
        free(head);  
        printf("\nOnly node of the list deleted ...");  
    }  
              
    else{  
        ptr = head;   
        while(ptr->next != NULL){  
            ptr1 = ptr;  
            ptr = ptr ->next;  
        }  
        ptr1->next = NULL;  
        free(ptr);  
        printf("\n Deleted Node from the last ...");  
    }     
}