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
    int ans = 0;

    pair<int, int> postOrder(TreeNode* node) {

        if (node == nullptr) {
            // cnt = 1;
            return {0, 0};
            // break;
            // cout<<"null"<<endl;
        }

        auto [sl, il] = postOrder(node->left);

        auto [sr, ir] = postOrder(node->right);
        int sum = node->val+sl+sr;
        int cnt=1+ir+il;
        if (sum / cnt == node->val) {
            ans++;
        }
        cout << sum << " " << cnt << " " << node->val << " " << ans << endl;
        // cnt++;
        return {sum,cnt};
    };

public:
    int averageOfSubtree(TreeNode* root) {
        postOrder(root);

        return ans;
    }
};