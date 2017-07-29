/*
  Insert Node at a given position in a linked list 
  head can be NULL 
  First element in the linked list is at position 0
  Node is defined as 
  struct Node;
    next=head;
  {
     int data;
     struct Node *next;
  }
*/
Node* InsertNth(Node *head, int data, int position)
{
    struct Node *current, *temp;
    struct Node* N=(struct Node*)malloc(sizeof(struct Node));
    N->data = data;
    N->next = NULL;
    current=head;
    if(head==NULL){
        head=N;
    }
    else if(head!=NULL && position==0){
        N->next=head;
        head=N;
    }
    else{
        current=head;
        for(int i=1;i<=position;i++){
            temp=current;
            current=current->next;
        }
        N->next=temp->next;
        temp->next=N;
    }
    return head;
    
  // Complete this method only
  // Do not write main function. 
}

