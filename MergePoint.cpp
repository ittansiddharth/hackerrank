/*
   Find merge point of two linked lists
   Node is defined as
   struct Node
   {
       int data;
       Node* next;
   }
*/
int FindMergeNode(Node *headA, Node *headB)
{
    struct Node *nexta , *nextb;
    nexta = headA;
    nextb = headB;
    while(nexta != nextb){
        if(nexta -> next == NULL){
            nexta = headB;
        }
        else{
            nexta = nexta -> next;
        }
        if(nextb -> next == NULL){
            nextb = headA;
        }
        else{
            nextb = nextb -> next;
        }
    }
    return nexta -> data;
    // Complete this function
    // Do not write the main method. 
}

