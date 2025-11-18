#include <iostream>

struct Node{
    int value;
    Node* right;
    Node* left;
    
    Node(int val): value(val), right(nullptr), left(nullptr) {}
    
};


Node* insert(Node* root, int num){
    if(!root) return new Node(num);
    
    if(num < root->value){
        root->left = insert(root->left, num);
    }
    
    else if(num > root->value){
        root->right = insert(root->right, num);
    }
    
    return root;
}

void preorder(Node* root){
    if(!root) return;
    
    preorder(root->left);
    std::cout << root->value << " ";
    preorder(root->right);
}

int main(){
    Node* root = nullptr;
    root = insert(root, 5);
    root = insert(root, 3);
    root = insert(root, 7);
    root = insert(root, 1);
    
    preorder(root);
    
}