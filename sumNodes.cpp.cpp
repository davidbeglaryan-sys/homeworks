#include <iostream>

struct Treenode{
    
    int data;
    Treenode* left;
    Treenode* right;
    
    explicit Treenode(int val): data(val), left(nullptr), right(nullptr) {}
    
};

int sumNodes(Treenode* root){
    if(!root) return 0;

    return root->data + sumNodes(root->left) + sumNodes(root->right);
    
    
} 

int main(){
    
    Treenode* root = new Treenode(1);
    root->left = new Treenode(2);
    root->right = new Treenode(3);
    root->left->left = new Treenode(4);

    int sum = sumNodes(root);
    std::cout << "Sum nodes: " << sum << std::endl;
      
}