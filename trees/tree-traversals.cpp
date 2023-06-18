#include <bits/stdc++.h>
using namespace std;
#include <bits/stdc++.h>
using namespace std;

//binary tree representation:
class TreeNode{
    public:
    int data;
    TreeNode* right;
    TreeNode* left;

    TreeNode(int val){ //constructor
        data = val;
        this->left = NULL;
        this->right = NULL;
    }
};

//binary trees construction using recursion:
TreeNode* buildTree(TreeNode* root){
    cout<<"enter the data: "<<endl;
    int data;
    cin>>data;

    root = new TreeNode(data);
    if(data == -1){
        return NULL;
    }

    cout<<"enter data for inserting in left of: "<<root->data<<endl;
    root->left = buildTree(root->left);
    cout<<"enter data for inserting in right of: "<<root->data<<endl;
    root->right = buildTree(root->right);

    return root;
}

void preOrderTraversal(TreeNode* root, vector<int> ans){
    if(root!= NULL){
        ans.emplace_back(root->data);
        preOrderTraversal(root->left, ans);
        preOrderTraversal(root->right, ans);
    }
}

void inOrderTraversal(TreeNode* root, vector<int> lmao){
    if(root == NULL){
        return;
    }
    
    inOrderTraversal(root->left, lmao);
    lmao.push_back(root->data);
    inOrderTraversal(root->right, lmao);
}

void postOrderTraversal(TreeNode* root, vector<int> hehe){
    if(root == NULL){
        return;
    }
    postOrderTraversal(root->left, hehe);
    postOrderTraversal(root->right, hehe);
    hehe.emplace_back(root->data);
}

int main()
{

}