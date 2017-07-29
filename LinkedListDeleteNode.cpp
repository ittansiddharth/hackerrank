/*
  Delete Node at a given position in a linked list 
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Delete(Node *head, int position)
{
    struct Node *next,*prev;
    int c=1,data;
    next=head;
    prev=next;
    if(position==0){
        head=next->next;
    }
    while(c<=position){
        prev=next;
        next=next->next;
        c++;
    }
    prev->next=next->next;
    free(next);
    return head;
  // Complete this method
}

