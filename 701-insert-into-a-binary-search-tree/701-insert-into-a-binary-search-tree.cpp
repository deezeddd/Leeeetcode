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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode* cur=root;
        TreeNode* prev=NULL;
        TreeNode* newNode = new TreeNode(val);
        
        if(root==NULL)return newNode;
        
       while(cur){
           
           if(val < cur->val){
               prev=cur;
           cur = cur->left ;
           }
        else{
            prev=cur;
          cur = cur->right ;
        }
           
       } 
        if(prev->val>val){
            prev->left = newNode;
        }
        else
           prev->right = newNode;
        
        
        return root;
    }
};