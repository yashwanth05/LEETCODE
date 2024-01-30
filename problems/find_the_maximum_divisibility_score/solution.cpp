class Solution {
public:
    int maxDivScore(vector<int>& nums, vector<int>& divisors) {
        int max = -1;
        int ans = INT_MAX;
        for(int i=0;i<divisors.size();i++){
            int score = 0;
            for(int j=0;j<nums.size();j++){
                if(nums[j]%divisors[i]==0){score++;}
            }
            if(score>max){
                max = score;
                ans = divisors[i];
            }
            if(score==max){
                max = score;
                ans = min(divisors[i],ans);
            }
        }
        if(max==0){return *min_element(divisors.begin(), divisors.end());}
        return ans;
    }
};