class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int sum = accumulate(arr.begin(),arr.end(),0);
        if(sum%3 != 0){
            return false;
        }
        int target = sum/3;
        int currentSum = 0;
        int count = 0;
        for(int i = 0; i<arr.size()-1;i++){
            currentSum += arr[i];
            if(currentSum == target){
                currentSum = 0;
                count++;
                if(count == 2){
                    return true;
                }
            }
        }
        return false;
    }
};