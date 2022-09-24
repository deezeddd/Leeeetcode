class Solution {
public:
    int findDuplicate(vector<int>& arr) {
        unordered_map<int, int> mp;
    for(auto i : arr){
        mp[i]++;
    }
    int t=0;
    for(auto i : mp){
        if(i.second>1) t = i.first;
    }
    return t;
    }
};