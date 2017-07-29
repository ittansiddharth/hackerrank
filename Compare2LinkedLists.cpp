/*
  Compare two linked lists A and B
  Return 1 if they are identical and 0 if they are not. 
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
int CompareLists(Node *headA, Node* headB)
{
    struct Node *nexta,*nextb;
    int flag=0,lena=0,lenb=0;
    nexta=headA;
    nextb=headB;
    while(nexta!=NULL){
        nexta=nexta->next;
        lena++;
    }
    while(nextb!=NULL){
        nextb=nextb->next;
        lenb++;
    }
    nexta=headA;
    nextb=headB;
    if(lena==lenb){
         while(nexta!=NULL && nextb!=NULL){
               if(nexta->data==nextb->data){
                     nexta=nexta->next;
                     nextb=nextb->next;
                     flag=1;
            }
               else{
                    flag=0;
                    break;
            }
        }
    }
    else{
        flag=0;
    }
    
    return flag;
  // This is a "method-only" submission. 
  // You only need to complete this method 
}

