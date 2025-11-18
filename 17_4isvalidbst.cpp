#include <iostream>
#include <climits>

struct Node {
    int value;
    Node* left;
    Node* right;

    Node(int val) : value(val), left(nullptr), right(nullptr) {}
};

bool isValidBSTHelper(Node* root, long long minval, long long maxval) {
    if (!root) return true;

    if (root->value <= minval || root->value >= maxval)
        return false;

    return isValidBSTHelper(root->left, minval, root->value) &&
           isValidBSTHelper(root->right, root->value, maxval);
}

bool isValidBST(Node* root) {
    return isValidBSTHelper(root, LLONG_MIN, LLONG_MAX); 
}

int main() {
    Node* root = new Node(5);
    root->left = new Node(3);
    root->right = new Node(7);
    root->left->left = new Node(1);

    std::cout << isValidBST(root) << std::endl; 

    Node* invalid = new Node(5);
    invalid->left = new Node(7);
    invalid->right = new Node(3);

    std::cout << isValidBST(invalid) << std::endl; 

    return 0;
}
