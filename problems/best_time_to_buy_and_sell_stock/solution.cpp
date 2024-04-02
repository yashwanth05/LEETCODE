class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int c = -1;
        int ans = 0;
        c=prices[0];
        for(int i=0;i<prices.size();i++){
           
                // cout<<prices[i]<<" "<<c<<" ";
                if(prices[i]<=c){
                    cout<<c;
                    c=prices[i];
                }
                    // cout<<ans;
                ans = max(ans,prices[i]-c);
                
            
        }
        return ans;
    }
};