class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int ans = 0;
        map<char,int> main;
        for(int i=0;i<stones.size();i++){
            if(main[stones[i]] >= 1){main[stones[i]]++;}
            else{main[stones[i]] = 1;}
            cout<<main[stones[i]]<<""<<stones[i]<<endl;
        }
        for(int i=0;i<jewels.size();i++){
            if(main[jewels[i]]){ans = ans+main[jewels[i]];}
            // ans = ans+main[jewels[i]];
        }
        return ans;
    }
};