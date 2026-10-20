class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans;
        unordered_map<int,int>freq;
        for(int num:nums){
            freq[num]++;
        }
        int dup=-1;
        int mis=-1;
        for(int i=1;i<=n;i++){
            if(freq[i]==2)dup=i;
            if(freq[i]==0)mis=i;
        }
        ans.push_back(dup);
        ans.push_back(mis);

        return ans;
    }
};