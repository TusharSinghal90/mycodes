class Solution {
public:
    int findDuplicate(vector<int>& nums) {
    unordered_map<int,int>mp;
        for(auto&val:nums)
            mp[val]++;
        int ans;
     for(auto&val:mp){
         if(val.second>1){
             
             ans= val.first;
         break;}}
        return ans;
        
         
        
    }
};