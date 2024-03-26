class Solution {
public:
    int addDigits(int num) {
        int temp = num;
        while(temp>=10){
            int sum = 0;
            while(temp>0){
                sum = sum+(temp%10);
                temp = temp/10;
            }
            temp = sum;
        }
        return temp;

    }
};