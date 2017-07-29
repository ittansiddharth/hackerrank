Node* Insert(Node* head,int data)
{
    struct Node *prev,*next;
    struct Node* N=(struct Node*)malloc(sizeof(struct Node));
    N->data = data;
    N->next = NULL;
    
    if(head == NULL) {
        head = N;
    }
    else {
        next=head;
        while(next!=NULL)
        {
            prev=next;
            next=next->next;            
        }
        N->next=prev->next;
        prev->next=N;    
    }
                      
     return head; 
}
