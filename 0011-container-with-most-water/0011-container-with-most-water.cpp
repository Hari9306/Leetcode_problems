class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right=height.size()-1;
        int max_water=0;
        while(left<right){
            int heg=min(height[left],height[right]);
            int curr_water=heg*(right-left);
            max_water=max(curr_water,max_water);
            if(height[left]>height[right]){
                right--;
            }
            else {
                left++;
            }
        }
        return max_water;
    }
};