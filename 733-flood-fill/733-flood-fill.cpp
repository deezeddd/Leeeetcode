class Solution {
public:
    void bfs(vector<vector<int>>& image, int sr, int sc, int color,int inicol ,vector<vector<int>> &ans){
        
        int n = image.size();
        int m = image[0].size();
        if(sr >= n || sr < 0 || sc >= m || sc < 0)
            return;
        if(ans[sr][sc] != inicol || ans[sr][sc] == color)
        return;
        
        ans[sr][sc] = color;
        bfs(image,sr+1,sc,color,inicol,ans);
        bfs(image,sr,sc-1,color,inicol,ans);
        bfs(image,sr,sc+1,color,inicol,ans);
        bfs(image,sr-1,sc,color,inicol,ans);
        
    }
    
    
    
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        
        int inicol = image[sr][sc];
        vector<vector<int>> ans = image;
        
        bfs(image,sr,sc,color,inicol,ans);
        return ans;
        
    }
};