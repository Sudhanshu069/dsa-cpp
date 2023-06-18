#include <bits/stdc++.h>
using namespace std;

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

vector<int> preOrderTraversal(TreeNode* root)
{
    vector<int> ans;
    if(root == NULL){
        return ans;
    }
    stack<TreeNode*> st;
    st.push(root);

    while(!st.empty()){
        root = st.top();
        st.pop();

        ans.emplace_back(root->data);

        if(root->left){
            st.push(root->left);
        }
        if(root->right){
            st.push(root->right);
        }
    }
    return ans;
}

vector<int> inOrderTraversal(TreeNode* root){
    vector<int> ans;
    stack<TreeNode* >st;
    while(true){
        if(root != NULL){
            st.push(root);
            root = root->left;
        }
        else{
            if(st.empty() == true){
                break;
            }
            root = st.top();
            st.pop();
            ans.emplace_back(root->data);
            root = root->right;
        }
    }
    return ans;
}

vector <int> postOrderTraversal(TreeNode* root){
    vector<int> ans;
    if(root == NULL){
        return ans;
    }
    stack<TreeNode*> st;
    st.push(root);

    while(!st.empty()){
        root = st.top();
        st.pop();

        ans.emplace_back(root->data);
        
        if(root->right){
            st.push(root->right);
        }

        if(root->left){
            st.push(root->left);
        }
    }

    reverse(ans.begin(), ans.end());
    return ans;
}

//same stack traversal
vector<int> preinpostOrderTraversal(TreeNode* root){
    stack<pair<TreeNode*, int>> st;
    st.push(make_pair(root, 1));
    vector<int> pre, in, post;
    if(root == NULL){
        return;
    }

    while(!st.empty()){
        auto it = st.top();
        st.pop();

        //pre order shit
        if(it.second == 1){
            pre.emplace_back(it.first->data);
            it.second++;
            st.push(it);

            if(it.first->left != NULL){
                st.push(make_pair(it.first->left, 1));
            }
        }
        else if(it.second == 2){
            in.emplace_back(it.first->data);
            it.second++;
            st.push(it);

            if(it.first->right){
                st.push(make_pair(it.first->left, 2));
            }
        }
        else{
            post.emplace_back(it.first->data);
        }
    }

}