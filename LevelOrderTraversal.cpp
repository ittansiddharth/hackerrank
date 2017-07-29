
/*
struct node
{
    int data;
    node* left;
    node* right;
}
*/

#include<queue>
void LevelOrder(node * root)
{
    queue<node*> q;
    if(root == NULL){
        return;
    }
    q.push(root);
    while(!q.empty()){
        node * cur = q.front();
        cout<<cur -> data<<" ";
        if(cur -> left != NULL){
            q.push(cur -> left);
        }
        if(cur -> right != NULL){
            q.push(cur -> right);
        }
        q.pop();
    }
}

