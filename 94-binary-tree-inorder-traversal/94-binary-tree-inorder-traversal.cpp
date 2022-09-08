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
//     void inor(TreeNode* root){
//           if(root==NULL) return;
    
//         inorderTraversal(root->left);
//         ans.push_back(root->val);
//         inorderTraversal(root->right);
//     }
//     vector<int> ans;
//     void pre(TreeNode*root){
//         if(root==NULL)return;
//         pre(root->left);
//         ans.push_back(root->val);
//         pre(root->right);
//     }
     
//         vector<int> ans;
        
//          stack<TreeNode*> st;
//         TreeNode* node=root;
          
//          while(true){
//              if(node!=NULL){
//                  st.push(node);
//                  node=node->left;
//              }
//              else{
//                  if(st.empty()==true)break;
//                  node=st.top();
//                  st.pop();
//                  ans.push_back(node->val);
//                  node=node->right;
//              }
//          }  
        
        
        // //recursive 
        // pre(root);
    
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>ans;
        if(!root)return {};
       stack<TreeNode*> st;
      TreeNode* temp=root;
        // st.push(root);
        while(temp||!st.empty()){
            if(temp){
                st.push(temp);
                temp=temp->left;
            }
            else{
             temp=st.top();
                ans.push_back(temp->val);
            st.pop();
                temp=temp->right;
                
            }
            
        }
        
        return ans;
        
        
        
        
        
        
        
        
        
        //morris
//           vector<int> ans;
//         TreeNode* cur=root;
//         while(cur){
//             if(!cur->left){
//                 ans.push_back(cur->val);
//                 cur=cur->right;
//             }
//             else{
//                 TreeNode* prev=cur->left;
//                 while(prev->right&&prev->right!=cur){
//                     prev=prev->right;
//                 }
//                 if(!prev->right){
//                     prev->right=cur;
                    
//                     cur=cur->left;
//                 }
//                 else{
//                     prev->right=NULL;
//                     ans.push_back(cur->val);
//                     cur=cur->right;
//                 }
                
                
//             }
            
//         }
//       return ans;
    }
};

