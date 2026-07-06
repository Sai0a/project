class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>mp;
        for(int i:nums){
            mp[i]++;
        }
        int num=nums[0];

        for(auto &p:mp){
            if(p.second==1)return p.first;
        }
        return -1;
    }
};