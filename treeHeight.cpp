#include <iostream>

struct TreeNode {
    
  int value;
  TreeNode* left;
  TreeNode* right;
  
  explicit TreeNode(int val): value(val), left(nullptr), right(nullptr) {}
    
};


int treeHeight(TreeNode* root){
    if(root == nullptr){
        return 0;
    }
    
    int leftCount = treeHeight(root->left);
    int rightCount = treeHeight(root->right);

    return 1+std::max(leftCount, rightCount);
}

int main(){
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);

    int height = treeHeight(root);
    std::cout << "height - " << height << std::endl; 

}