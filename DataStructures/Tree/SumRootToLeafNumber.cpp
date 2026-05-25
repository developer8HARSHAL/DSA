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
    int helper(TreeNode* node,int num){
        if(node==NULL) return 0;
        num=num*10+node->val;       

        
        if(!node->left && !node->right){
            return num;
            
        }
        return helper(node->left,num)+helper(node->right,num);


    }
    int sumNumbers(TreeNode* root) {      

        return helper(root,0);

        
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
   int result=sol.sumNumbers(root);
   cout<<result<<endl;
   
    return 0;
}