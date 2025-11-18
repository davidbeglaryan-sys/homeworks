#include <iostream>

struct TreeNode {
    
  int value;
  TreeNode* left;
  TreeNode* right;
  
  explicit TreeNode(int val): value(val), left(nullptr), right(nullptr) {}
    
};


int countNodes(TreeNode* root){
    if(root == nullptr){
        return 0;
    }
    
    int leftCount = countNodes(root->left);
    int rightCount = countNodes(root->right);

    return 1+leftCount+rightCount;
}

int main()
{
   TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);

    int count = countNodes(root);
    
    std::cout << "Count nodes - " << count << std::endl; 

}