#include <iostream>

struct TreeNode {
    
  int value;
  TreeNode* left;
  TreeNode* right;
  
  explicit TreeNode(int val): value(val), left(nullptr), right(nullptr) {}
    
};


int countLeaves(TreeNode* root){
    if(root == nullptr){
        return 0;
    }
    
    if(root->left == nullptr && root->right == nullptr) return 1;

    return countLeaves(root->left) + countLeaves(root->right);
}

int main(){
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    int leaves = countLeaves(root);
    std::cout << "count leaves - " << leaves << std::endl; 

}