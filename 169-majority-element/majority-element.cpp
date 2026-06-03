class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int s=nums.size();
        int c=nums[0];
        int count=1;
        for(int i=1;i<s;i++){
            if(c==nums[i]){
                count++;

            }
            else{
                count--;
                if(count==0){
                    c=nums[i];
                    count=1;
                }
            }
        }
        return c;
        
    }
   
};