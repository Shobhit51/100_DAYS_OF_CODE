class Solution {
    private:
    bool solve(TreeNode* l,TreeNode* r){
        if(l==NULL && r==NULL){
            return true;
        }
        
        if(l==NULL || r==NULL || (l->val!=r->val)){
            return false;
        }
        return solve(l->left,r->right) && solve(l->right,r->left);
    }
    
   public:
    bool isSymmetric(TreeNode* root) {
        TreeNode*l=root->left;
        TreeNode*r=root->right;
         return solve(l,r);
    }
};