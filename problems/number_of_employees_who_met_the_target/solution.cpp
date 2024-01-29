class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int h = 0;
        for(auto element:hours){
            if(element>=target){
                h++;
            }
        }
        return h;
    }
};