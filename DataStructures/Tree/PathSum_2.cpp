#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL){}
};

class Solution {
public:
    void helper(TreeNode* node, int targetSum, 
                vector<int>& current, vector<vector<int>>& result){
        if(node == NULL) return;
        current.push_back(node->val);
        if(!node->left && !node->right && targetSum == node->val){
            result.push_back(current);
        }
        helper(node->left,  targetSum - node->val, current, result);
        helper(node->right, targetSum - node->val, current, result);
        current.pop_back();
    }

    vector<vector<int>> pathSum(TreeNode* root, int targetSum){
        vector<vector<int>> result;
        vector<int> current;
        helper(root, targetSum, current, result);
        return result;
    }
};

int main(){
    TreeNode* root    = new TreeNode(5);
    root->left        = new TreeNode(4);
    root->right       = new TreeNode(8);
    root->left->left  = new TreeNode(11);
    root->right->left = new TreeNode(13);
    root->right->right= new TreeNode(4);
    root->left->left->left  = new TreeNode(7);
    root->left->left->right = new TreeNode(2);
    root->right->right->right = new TreeNode(1);

    Solution sol;
    vector<vector<int>> result = sol.pathSum(root, 22);

    for(auto path : result){
        for(int val : path){
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;
}