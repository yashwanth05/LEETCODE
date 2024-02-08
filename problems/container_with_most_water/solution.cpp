class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans = -1;
        int i = 0;
        int j = height.size()-1;
        while(i<j){
            ans = max(ans,abs(i-j)*min(height[i],height[j]));
            if(height[i]<=height[j]){
                i++;
            }
            else if(height[i]>height[j]){
                j--;
            }
        }
        return ans;            
    }      
};