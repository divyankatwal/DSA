/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
    public:
        vector<int> postorderTraversal(TreeNode* root) {
            stack<TreeNode*> st;
            vector<int> ans;
            if (root == nullptr)
                return ans;
            TreeNode* node = root;
            TreeNode* temp;
            while (node != nullptr || !st.empty()) {
                /* code */
                if (node != nullptr) {
                    /* code */
                    st.push(node);
                    node = node->left;
                } else {
                    temp = st.top()->right;
                    if (temp == nullptr) {
                        /* code */
                        temp = st.top();
                        st.pop();
                        ans.push_back(temp->val);
                        while (!st.empty() && temp == st.top()->right) {
                            /* code */
                            temp = st.top();
                            st.pop();
                            ans.push_back(temp->val);
                        }
                    } else
                        node = temp;
                }
            }
            return ans;
        }
    };