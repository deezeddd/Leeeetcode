class Solution {
public:
    void f(vector<vector<int>>& mat ,int n ,int m){
        for(int i = 0;i < n ;i++){
            for(int j = 0 ;j < i ; j++){
                swap(mat[i][j],mat[j][i]);
            }
        }
       
        
    }
    
    void rotate(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        f(mat,n,m);
         for(int i = 0; i < n ;i++ ){
            reverse(mat[i].begin(),mat[i].end());
        }
    }
};