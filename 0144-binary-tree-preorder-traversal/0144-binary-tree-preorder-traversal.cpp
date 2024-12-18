class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        if (root == nullptr) { // Check if root is null
            return ans; // Return an empty vector
        }
        ans.push_back(root->val); // Visit the root node

        // Recursively visit left and right subtrees
        vector<int> left = preorderTraversal(root->left);
        vector<int> right = preorderTraversal(root->right);

        // Add left subtree values to the result
        ans.insert(ans.end(), left.begin(), left.end());
        ans.insert(ans.end(), right.begin(), right.end());

        return ans;
    }
};
