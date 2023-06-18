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

//level order traversal:
void levelOrderTraversal(TreeNode* root){
    queue<TreeNode*> q;
    q.push(root); //inserting initial element;
    q.push(NULL);

    while(!q.empty()){
        TreeNode* temp = q.front();
        q.pop();

        if(temp == NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL); //entering at the end of the element already present in the queue
            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }

        }

    }
}

int main()
{
    TreeNode* root = NULL;
    root = buildTree(root);
    //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    levelOrderTraversal(root);

    
    return 0;
}