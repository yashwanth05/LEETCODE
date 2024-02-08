class Solution {
public:
    bool cal(string s, int i, int j, int count) {
        if (count > 1)
            return false;
        if (s.size() == 1)
            return true;

        while (i < j) {
            if (s[i] == s[j]) {
                i++;
                j--;
            }
            else {
                count++;
                return cal(s, i+1, j, count) || cal(s, i, j-1, count);
            }
        }
        return true;
    }

    bool validPalindrome(string s) {
        int i = 0, j = s.size()-1, count = 0;
        return cal(s, i, j, count);
    }
};