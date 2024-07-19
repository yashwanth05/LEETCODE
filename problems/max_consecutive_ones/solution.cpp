class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans = 0;
        int front = 0;
        int back = -1;
        while(front<nums.size()){
            if(nums[front] == 0){
                int temp = front-1-back;
                ans = max(ans,temp);
                back = front;
            }
            cout<<front<<" "<<back<<" "<<ans<<endl;
            front++;
        }
        front--;
        int temp = front - back;
        ans = max(ans,temp);
        return ans;
    }
};