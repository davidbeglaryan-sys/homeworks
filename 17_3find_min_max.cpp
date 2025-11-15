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

void inorder(Node* root){
    if(!root) return;
    
    inorder(root->left);
    std::cout << root->value << " ";
    inorder(root->right);
}

int findMinBST(Node* root) {
    if (!root) throw std::runtime_error("Tree is empty");

    while (root->left)
        root = root->left;

    return root->value;
}


int findMaxBST(Node* root){
    if(!root ) throw std::runtime_error("error") ;
    
    while(root->right)
        root = root->right;
    
    return root->value;
    
}

bool search(Node* root, int value){
    
    if(!root || root->value == value) return root;
    
    if(value < root->value){
        return search(root->left, value);
    } else {
        return search(root->right, value);
    }
    
}




int main(){
    Node* root = nullptr;
    root = insert(root, 5);
    root = insert(root, 3);
    root = insert(root, 7);
    root = insert(root, 1);
    
  //  preorder(root);
    
    int minVal = findMinBST(root); 
    int maxVal = findMaxBST(root); 
    
    std::cout << "min - " << minVal << "\n" << "max - " << maxVal; 
    
}