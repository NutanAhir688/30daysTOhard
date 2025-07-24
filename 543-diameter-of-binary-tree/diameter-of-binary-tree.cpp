/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        if(!root){
            return 0;
        }else
        {
          int lh=maxHeight(root->left);
          int rh=maxHeight(root->right);
          int d=lh+rh;
        int sub = max(diameterOfBinaryTree(root->left), diameterOfBinaryTree(root->right));
        return max(d,sub);
        }

    }
    int maxHeight(TreeNode* root) {
        if (!root) return 0;
        return 1 + max(maxHeight(root->left), maxHeight(root->right));
    }
    };