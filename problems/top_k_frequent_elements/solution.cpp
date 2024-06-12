class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> m;
        vector<pair<int,int>> v;
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            if(m.find(nums[i]) != m.end()){
                m[nums[i]]++;
            }
            else{
                m[nums[i]] = 1;
            }
        }
        for(auto i=m.begin();i!=m.end();i++){
            v.push_back(make_pair(i->second,i->first));
        }
        sort(v.rbegin(),v.rend());
        for(int i=0;i<v.size() && k!=0 ;i++)
        {
            ans.push_back(v[i].second);
            k--;
        }       
        return ans;
    }
};
