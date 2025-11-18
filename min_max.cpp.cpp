#include <iostream>
#include <algorithm> 
#include <climits>

struct TreeNode{
    int data;
    TreeNode* left;
    TreeNode* right;
    
    explicit TreeNode(int val): data(val), left(nullptr), right(nullptr) {}
    
};




int findMax(TreeNode* root){
    if(!root) return INT_MAX;
    
    int cur = root->data;
    
    if(root->left) {
        cur = std::max(cur, findMax(root->left));
    }
    if(root->right){ 
        cur = std::max(cur, findMax(root->right));
    }
    
    return cur;
    
}



int findMin(TreeNode* root){
    if(!root) return INT_MIN;
    
    int cur = root->data;
    
    if(root->left) {
        cur = std::min(cur, findMin(root->left));
    }
    if(root->right){ 
        cur = std::min(cur, findMin(root->right));
    }
    
    return cur;
    
}

int main() {
    TreeNode* root = new TreeNode(5);
    root->left = new TreeNode(3);
    root->right = new TreeNode(8);
    root->left->left = new TreeNode(1);

    int maxVal = findMax(root);  
    int minVal = findMin(root);  

    std::cout << "Max: " << maxVal << ", Min: " << minVal << std::endl;

    // Освобождаем память
    delete root->left->left;
    delete root->left;
    delete root->right;
    delete root;

    return 0;
}
