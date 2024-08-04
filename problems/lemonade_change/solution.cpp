class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        map<int,int> mp;
        mp[5] = 0;
        mp[10] = 0;
        mp[20] = 0;
        for(int i=0;i<bills.size();i++){
            if(bills[i] == 5) mp[5]++;
            else if(bills[i] == 10){
                if(mp[5]<1) return false;
                else{
                    mp[10]++;
                    mp[5]--;
                } 
            }
            else{
                cout<<mp[5]<<" "<<mp[10]<<endl;
                if(mp[10]>=1 && mp[5]>=1){
                    mp[10]--;
                    mp[5]--;
                }
                else if(mp[5]>=3){
                    mp[5] = mp[5] - 3;
                }
                else return false;
                mp[20]++;
            }
        }
        return true;
    }
};