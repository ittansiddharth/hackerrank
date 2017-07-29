
/*The tree node has data, left child and right child 
class Node {
    int data;
    Node* left;
    Node* right;
};

*/
    int height(Node* root) {

        if(root == NULL){
            return -1;
        }

        int leftside = height(root -> left);
        int rightside = height(root -> right);
        if(leftside > rightside){

            return leftside + 1;
        }
        else {

            return rightside + 1;
        }
            
        // Write your code here.
    
}
  
