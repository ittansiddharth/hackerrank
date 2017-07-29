/*
  Print elements of a linked list in reverse order as standard output
  head pointer could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
void ReversePrint(Node *head)
{
    struct Node *next;
    next=head;
    if(next!=NULL){
        ReversePrint(next->next);
        cout<<next->data<<endl;       
    }
    
  // This is a "method-only" submission. 
  // You only need to complete this method. 
}

