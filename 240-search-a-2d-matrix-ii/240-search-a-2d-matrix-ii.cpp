class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int tar) {
        int row=mat.size();
        int col=mat[0].size();
        int Strw=0,endCol=col-1;
        
        while(Strw<row && endCol>=0){
            int element=mat[Strw][endCol];
            
            if(mat[Strw][endCol]==tar)
                return 1;
            if(element>tar)
                endCol--;
                else
                Strw++;
        
    }
        return 0;
    }
};