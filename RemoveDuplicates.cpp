/*
  Remove all duplicate elements from a sorted linked list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* RemoveDuplicates(Node *head)
{
    struct Node *next ,*prev ;
    next=head;
    prev=head;
    while(next != NULL)
    {
        prev = next;
        next = next -> next;
        if(next == NULL){
            break;
        }
        if(next -> data  == prev -> data )
        {
            prev -> next = next -> next;
           // free(next);
            next = prev ;
        }
    }
    return head;
  // This is a "method-only" submission. 
  // You only need to complete this method. 
}



