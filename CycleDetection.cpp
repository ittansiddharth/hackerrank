/*
Detect a cycle in a linked list. Note that the head pointer may be 'NULL' if the list is empty.

A Node is defined as: 
    struct Node {
        int data;
        struct Node* next;
    }
*/

bool has_cycle(Node* head) {
    struct Node *next,*prev;
    next=head;
    prev=head;
    while(next != NULL){
        next=next->next->next;
        prev=prev->next;
        if(prev==next){
            return true;
        }
    }
    return false;
    // Complete this function
    // Do not write the main method
}

