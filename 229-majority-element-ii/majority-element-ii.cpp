class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>ans;
        int size=nums.size();
        unordered_map<int,int>mp;
        for(int i=0;i<size;i++){
            mp[nums[i]]++;

        }
        int minelement=size/3;
        for(const auto& pair:mp){
            if(pair.second>minelement){
                ans.push_back(pair.first);
            }
        }
        return ans;
    }
};