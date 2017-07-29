/*
Node is defined as 

typedef struct node
{
   int data;
   node * left;
   node * right;
}node;

*/


node * insert(node * root, int value)
{
    if(root == NULL){
        node*  a = new node;
        a -> data = value;
        return a;
    }
    if(value == root -> data){
        return root;
    }
    if(value > root -> data){
        root -> right = insert(root -> right, value);
  //      return value;
    }
    if(value < root -> data){
        root -> left = insert(root -> left, value);
//        return value;
    }
    


   return root;
}

