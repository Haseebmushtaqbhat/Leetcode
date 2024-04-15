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
int ans=0;
    int sumNumbers(TreeNode* root) {

 rec(root,0);

return ans;
    }



void rec(TreeNode* root,int sum){
           if(root==NULL)
     return;
sum=root->val+sum*10;
if(root->right==NULL &&root->left==NULL ){
    ans +=sum;
    return;
}

    rec( root->left,sum);
   rec( root->right,sum);

    }
};