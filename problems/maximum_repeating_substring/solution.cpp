class Solution {
public:
    int maxRepeating(string sequence, string word) {
        int i = 0;
        int ans = 0;
        if(sequence.size()<word.size()){
            return 0;
        }
        while (i <= sequence.size() - word.size()) {
            cout<<i<<endl;
            int j = 0;
            int t = i;
            cout<<sequence.substr(i, word.size())<<endl;
            while (sequence.substr(i, word.size()) == word) {
                j++;
                i += word.size();
            }
            i=t+1;
            ans = std::max(ans, j);
            // i++;
        }
        return ans;
    }
};