#include <iostream>
#include <vector>
using namespace std;

struct treenode {
    int val;
    treenode* left;
    treenode* right;

    treenode(int x) {
        val = x;
        left = NULL;
        right = NULL;
    }
};

void inorder(treenode* root){
    if(root == NULL) return;

    inorder(root->left);
    cout << root->val << " ";
    inorder(root->right);
}

treenode* buildroot(vector<int>& arr, int& index){
    if(index >= arr.size()) return NULL;

    if(arr[index] == -1){
        index++;
        return NULL;
    }

    treenode* root = new treenode(arr[index]);
    index++;

    root->left = buildroot(arr, index);
    root->right = buildroot(arr, index);

    return root;
}

int main() {
    vector<int> arr = {1,2,4,-1,-1,5,-1,-1};
    int index = 0;

    treenode* root = buildroot(arr, index);
    inorder(root);   // Output: 4 2 5 1
}
