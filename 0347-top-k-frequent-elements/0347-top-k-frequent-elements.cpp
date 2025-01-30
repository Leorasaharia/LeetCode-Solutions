class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
     priority_queue<int, vector<int>, greater<int>> minHeap;
        for(int n:nums){
            minHeap.push(n);
            if(minHeap.size()>k) {
                minHeap.pop();
            }
            }        
            return minHeap.top();
        
        
    }
};