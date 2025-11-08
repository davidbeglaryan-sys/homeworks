#include <iostream>
#include <queue>

struct Treenode{
    
    int data;
    Treenode* left;
    Treenode* right;
    
    explicit Treenode(int val): data(val), left(nullptr), right(nullptr) {}
    
};

void levelOrder(Treenode* root){
    if(!root) return;
    
    std::queue<Treenode*> q;
    q.push(root);
    
    while(!q.empty()){
        Treenode* node = q.front();
        q.pop();
        
        std::cout<< node->data << " ";
        
        if(node->left){
            q.push(node->left);
        }
        if(node->right){
            q.push(node->right);
        }
        
        
    }
    
    
}

int main()
{
    Treenode* root = new Treenode(1);
    root->left = new Treenode(2);
    root->right = new Treenode(3);
    root->left->left = new Treenode(4);
    root->left->right = new Treenode(5);

    levelOrder(root);  
}