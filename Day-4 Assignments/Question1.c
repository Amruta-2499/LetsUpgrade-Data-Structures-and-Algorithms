
void insertPos(Node** current,int pos,int data,int size){
    if (pos < 1 || pos > size + 1)
        printf("Invalid position!\n");
    else{
        while(pos--){
            if(pos == 0){
                Node* temp = getNode(data);
                temp->next = *current;
                *current = temp;
            }
            else
              current = &(*current)->next;
        }
        size++;
    }
}
 