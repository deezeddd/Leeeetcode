class Solution {
public:
    void f(vector<int>& nums,
          int mp[],vector<int> &temp, vector<vector<int>> &ans ){
        if(temp.size() == nums.size() ){
            ans.push_back(temp);
            return;
        }
         for(int i = 0 ;i < nums.size() ; i++){
             if(!mp[i]){
                 temp.push_back(nums[i]);
                mp[i] = 1;
                f(nums,mp,temp,ans);
                 mp[i] = 0;
                 temp.pop_back(); 
             }
        }
        return;
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        int n = nums.size();
        int mp[n];
        vector<int> temp;
        vector<vector<int>> ans;
        for(int i = 0 ;i < n ; i++){
            mp[i] = 0;
            
        }
            f(nums, mp, temp, ans);
        return ans;
    }
};