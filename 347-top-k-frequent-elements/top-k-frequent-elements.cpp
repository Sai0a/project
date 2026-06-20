class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        int s=nums.size();
        unordered_map<int,int>m;
        for(int i=0;i<s;i++){
            m[nums[i]]++;
        }
        vector<pair<int,int>>arr;
        for(auto &p:m){
            arr.push_back({p.first,p.second});
        }
        sort(arr.begin(),arr.end(),[](auto &a,auto &b){
            return a.second>b.second;
        });
        vector<int>ans;
        for(int i=0;i<k;i++){
            ans.push_back(arr[i].first);
        }
        return ans;
    }
};