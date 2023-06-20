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

int height(TreeNode* root, int &diameter){
    if(root == NULL)
    {
        return 0;
    }

    int lh = height(root->left, diameter);
    int rh = height(root->right, diameter);
    diameter = max(diameter, lh + rh);

    return 1 + max(lh, rh);
}

int diameter(TreeNode* root){
    int diameter = 0;
    height(root, diameter);
    return diameter;
}