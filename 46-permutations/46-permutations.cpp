class Solution {
public:
    void f(vector<int>& nums,
           map<int,int> &mp,vector<int> &temp, vector<vector<int>> &ans ){
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
        map<int,int> mp;
        int n = nums.size();
        vector<int> temp;
        vector<vector<int>> ans;
        for(int i = 0 ;i < n ; i++){
            mp[i] = 0;
            
        }
            f(nums, mp, temp, ans);
        return ans;
    }
};