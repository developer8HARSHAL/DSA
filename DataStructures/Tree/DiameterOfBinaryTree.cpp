#include <iostream>
#include <algorithm>
using namespace std;

// ---------- Tree Node Definition ----------
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) {
        val = x;
        left = NULL;
        right = NULL;
    }
};

// ---------- Global variable to store diameter ----------
int ans = 0;

// ---------- Height function (updates diameter) ----------
int height(TreeNode* root) {
    if (root == NULL) return 0;

    int leftHeight = height(root->left);
    int rightHeight = height(root->right);

    // update diameter at this node
    ans = max(ans, leftHeight + rightHeight);

    // return height
    return 1 + max(leftHeight, rightHeight);
}

// ---------- Diameter function ----------
int diameter(TreeNode* root) {
    ans = 0;        // reset before calculation
    height(root);
    return ans;
}

// ---------- Main ----------
int main() {

    // Build this tree:
    //        1
    //       / \
    //      2   3
    //     / \
    //    4   5

    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    cout << "Diameter of tree: " << diameter(root) << endl;

    return 0;
}
