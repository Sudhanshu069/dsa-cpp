#include <bits/stdc++.h>
using namespace std;

class TreeNode
{
public:
    int data;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int val)
    {
        data = val;
        left = right = NULL;
    }
};

vector<vector<int>> zigzagLevelOrder(TreeNode *root)
{
    vector<vector<int>>result;

    if(root == NULL){
        return result;
    }

    queue<TreeNode*> q;
    bool leftToRight = true;
    q.push(root);
    while(!q.empty()){
        int size = q.size();
        vector<int> ans(size);
        for(int i = 0; i < size; i++){
            TreeNode* temp;
            temp = q.front();
            q.pop();

            int index = leftToRight ? i : size - i - 1;
            ans[index] = temp-> data; 

            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
        leftToRight = !leftToRight;
        result.emplace_back(ans);
    }
    return result;

}