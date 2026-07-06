class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int start=0,end=n-1;

        int maxarea=0;

        while(start<end){
            int vertical=min(height[start],height[end]);

            int width=end-start;

            int area=vertical*width;

            maxarea=max(maxarea,area);

            if(height[start]>height[end])end--;
            else{
                start++;
            }


        }
        return maxarea;
    }
};