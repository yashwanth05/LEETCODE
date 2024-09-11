class Solution {
public:
    int fun(long n){
        if(n==1) return 1;
        if(n%2 == 0) return 1+fun(n/2);
        else{
            int minus = 1+fun(n-1);
            int plus = 1+fun(n+1);
            return min(minus,plus);
        }
    }
    int integerReplacement(int n) {
        return fun(n)-1;
    }
};