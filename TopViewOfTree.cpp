/*
struct node
{
    int data;
    node* left;
    node* right;
};

*/

void topView(node * root) {
 
   static int count=0;
    
 if(root -> left && count>= 0 )
 {
   
     count++;
     topView(root -> left);
 }
    cout << root -> data<<" ";
    count--;
    
    if(root -> right && count < 0)
    {
        count--;
        topView(root -> right);
    }
    
}

