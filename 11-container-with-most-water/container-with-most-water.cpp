class Solution {
public:
    int maxArea(vector<int>& h) {
        int n=h.size();
        int right=n-1;
        int left=0;
        int maxarea=0;
        while(left<right){
            int currwidth=right-left;
            int currheight=min(h[right],h[left]);
            int area=currwidth*currheight;
            maxarea=max(maxarea,area);
            if(h[left]<h[right])left++;
            else{
                right--;
            }
        }
        return maxarea;
    }
};