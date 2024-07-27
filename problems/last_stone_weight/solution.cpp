class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> maxHeap;
        for(int i=0;i<stones.size();i++){
            maxHeap.push(stones[i]);
        }
        while(maxHeap.size()!=1){
            int a = maxHeap.top();
            maxHeap.pop();
            int b = maxHeap.top();
            maxHeap.pop();
            int num;
            if(a<b){
                num = b-a;
            }
            else{
                num = a-b;
            }
            maxHeap.push(num);
        }
        return maxHeap.top();
    }
};