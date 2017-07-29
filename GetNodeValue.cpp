/*
  Get Nth element from the end in a linked list of integers
  Number of elements in the list will always be greater than N.
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
int GetNode(Node *head,int positionFromTail)
{
    struct Node *next,*prev;
    int l=0;
    next = head;
    prev = head;
    while(next!=NULL){
        next=next->next;
        if(l++>positionFromTail){
            prev=prev->next;
        }
    }
    return prev -> data;
    
   // This is a "method-only" submission. 
  // You only need to complete this method. 
}

