#include <iostream>

struct Treenode{
    
    int data;
    Treenode* left;
    Treenode* right;
    
    explicit Treenode(int val): data(val), left(nullptr), right(nullptr) {}
    
};

void preorder(Treenode* root){
    if(!root) return;
    
    std::cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
    
}

void inorder(Treenode* root){
    if(!root) return;
    
    preorder(root->left);
    std::cout << root->data << " ";
    preorder(root->right);
}

void postorder(Treenode* root){
    if(!root) return;
    
    preorder(root->left);
    preorder(root->right);
    std::cout << root->data << " ";
}

int main()
{
    Treenode* root = new Treenode(1);
    root->left = new Treenode(2);
    root->right = new Treenode(3);

    preorder(root);   
    inorder(root);    
    postorder(root);  
}