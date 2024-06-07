class Solution {
public:
    int fib(int n) {
        int a=1;
        int b=0;
        int temp;
        if(n<=0){
            return 0;
        }
        for(int i=0;i<n-1;i++){
            temp = a;
            a=a+b;
            b=temp;
        }
        return a;
    }
};