#include <bits/stdc++.h>
using namespace std;

class TreeNode{
    public:
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val){
        data = val;
        left = right = NULL;
    }
};

bool height(TreeNode* root){
    if(root == NULL) return 0;
    int lh = height(root->left);
    if(lh == NULL) return -1;
    int rh = height(root->right);
    if(rh == NULL) return -1;

    if(abs(lh - rh) > 1){
        return -1;
    }
    return 1 + max(lh, rh);
}

bool isBalanced(TreeNode* root){
    return height(root) != -1;
}