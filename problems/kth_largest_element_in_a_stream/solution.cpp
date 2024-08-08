class KthLargest {
private:
    std::priority_queue<int, std::vector<int>, std::greater<int>> pq;
    int k;
    
public:
    KthLargest(int k, std::vector<int>& nums) : k(k) {
        for (int num : nums) {
            pq.push(num);
            if (pq.size() > k) {
                pq.pop();
            }
        }
    }
    
    int add(int val) {
        pq.push(val);
        if (pq.size() > k) {
            pq.pop();
        }
        return pq.top();
    }
};