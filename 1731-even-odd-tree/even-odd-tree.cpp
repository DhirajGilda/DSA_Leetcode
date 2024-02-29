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
    bool isEvenOddTree(TreeNode* root) {
        if (root == nullptr)
            return false;
        
        queue<TreeNode*> q;
        q.push(root);
        int level = 0;
        
        while (!q.empty()) {
            vector<int> ans;
            int n = q.size();
            int prev = level % 2 == 0 ? INT_MIN : INT_MAX; // Initialize prev based on level
            
            for (int i = 0; i < n; ++i) {
                TreeNode* temp = q.front();
                q.pop();
                
                if (level % 2 == 0) { // Check for even level
                    if (temp->val % 2 == 0 || temp->val <= prev) // Check for even value or non-increasing sequence
                        return false;
                } else { // Check for odd level
                    if (temp->val % 2 != 0 || temp->val >= prev) // Check for odd value or non-decreasing sequence
                        return false;
                }
                
                ans.push_back(temp->val);
                
                if (temp->left)
                    q.push(temp->left);
                
                if (temp->right)
                    q.push(temp->right);
                
                prev = temp->val; // Update prev for the next iteration
            }
            
            level++; // Increment level here
        }
        
        return true;
    }
};