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
    void bottomleftvalue(TreeNode* root , int level , int result[]){
        if(root==NULL){
            return;
        }

        if(level>result[0]){
            result[0]=level;
            result[1]=root->val;
        }

        bottomleftvalue(root->left , level+1,result);
        bottomleftvalue(root->right , level+1, result);
    }
    int findBottomLeftValue(TreeNode* root) {
        if(root==NULL){
            return -1;
        }
        int result[]={0,root->val};
        bottomleftvalue(root,0,result);
        return result[1];
    }
};