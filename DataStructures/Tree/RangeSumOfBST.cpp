#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>

using namespace std;

struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x){
        val=x;
        left=NULL;
        right=NULL;
    }

};

void helper(TreeNode* node, vector<int>&result){
    if(node==NULL) return;

    helper(node->left,result);
    result.push_back(node->val);
    helper(node->right,result);
}


int rangeSum(TreeNode* root, int low, int high){
    vector<int>result;
    int sum=0;
    helper(root,result);

    for(int i=0;i<result.size();i++){
        if(result[i]>=low && result[i]<=high){
            sum+=result[i];
        }
    }
    return sum;

}


// int main(){
//     TreeNode* root=new TreeNode(10);
//     root->left=new TreeNode(5);
//     root->right=new TreeNode(15);
//     root->left->left=new TreeNode(3);
//     root->left->right=new TreeNode(7);
//     root->right->right=new TreeNode(18);

//     int low=7;
//     int high=15;

//     int r=rangeSum(root,low,high);
//     cout<<r<<endl;

//     return 0;

// }



TreeNode* buildTree(vector<int>& nodes){
    if(nodes.empty() || nodes[0]==-1) return NULL;
    TreeNode* root = new TreeNode(nodes[0]);
    queue<TreeNode*> q;
    q.push(root);
    int i = 1;
    while(!q.empty() && i < nodes.size()){
        TreeNode* node = q.front(); q.pop();
        if(i < nodes.size() && nodes[i] != -1){
            node->left = new TreeNode(nodes[i]);
            q.push(node->left);
        }
        i++;
        if(i < nodes.size() && nodes[i] != -1){
            node->right = new TreeNode(nodes[i]);
            q.push(node->right);
        }
        i++;
    }
    return root;
}


int main(){

    int t;
    cin>>t;


    while(t--){
        int low,high;
        cin>>low>>high;

        int n;
        cin>>n;

        vector<int>node(n);

        

        for(int i=0;i<n;i++){
            cin>>node[i];
        }

        TreeNode* root= buildTree(node);
        cout<<rangeSum(root,low,high)<<endl;

    

    }
        return 0;

}