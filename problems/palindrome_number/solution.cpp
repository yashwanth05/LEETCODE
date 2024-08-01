class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        int temp = x;
        long r = 0;
        while(x>0){
            r = r*10+x%10;
            x = x/10;
        }
        if(r>INT_MAX || r<INT_MIN) return false;
        cout<<r<<" "<<temp<<endl;
        return int(r)==temp;
    }
};