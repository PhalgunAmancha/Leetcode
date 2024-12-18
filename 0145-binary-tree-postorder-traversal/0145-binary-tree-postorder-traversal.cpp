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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>ans;
        if(root==NULL)
        {
            return ans;
        }
        int temp=root->val;
        vector<int>left=postorderTraversal(root->left);
        vector<int>right=postorderTraversal(root->right);
        
        for(auto it:left)
        {
            ans.push_back(it);
        }
        for(auto it:right)
        {
            ans.push_back(it);
        }
        ans.push_back(temp);
        return ans;
    }
};