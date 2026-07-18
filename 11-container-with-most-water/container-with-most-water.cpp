class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int left=0;
        int right=n-1;
        int maxarea=0;
        while(left<right){
            int vertical=min(height[left],height[right]);
            int width=right-left;
            int area=vertical*width;
            maxarea=max(maxarea,area);

            if(height[left]>height[right])right--;

            else{
                left++;
            }
        }
        return maxarea;
    }
};