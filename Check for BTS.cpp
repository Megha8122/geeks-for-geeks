class Solution
{
        private:
    bool dfs(Node* root,int mm,int mx){
        if(root==NULL){
            return true;
        }
        if(root->data<=mm or root->data>=mx){
            return false;
        }
        return dfs(root->left,mm,root->data) and dfs(root->right,root->data,mx);
    }
    public:
    //Function to check whether a Binary Tree is BST or not.
    bool isBST(Node* root) 
    {
        if(root==NULL){
            return true;
        }
    
        int m_max=INT_MAX;
        int m_min=INT_MIN;
        
        return dfs(root,m_min,m_max);
        
    }
};

