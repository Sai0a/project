class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long sum=0,maxsum=0;
        unordered_map<int,int>freq;
        int n=nums.size();
        for(int i=0;i<n;i++){
            sum+=nums[i];
            freq[nums[i]]++;

            //if window is not valid
            if(i>=k){
                sum-=nums[i-k];
                freq[nums[i-k]]--;
                if(freq[nums[i-k]]==0){
                    freq.erase(nums[i-k]);
                }
            }

            //if window is valid
            if(i>=k-1  && freq.size()==k){
                maxsum=max(sum,maxsum);
            }
        }
        return maxsum;

    }
}; 