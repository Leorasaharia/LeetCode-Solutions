class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& d) {
        sort(d.begin(), d.end());
        deque<int> q;
        for(int i = d.size() - 1; i >= 0; i--) {
            if(!q.empty()) {
                q.push_front(q.back());
                q.pop_back();
            }
            q.push_front(d[i]);
        }
        return vector<int>(q.begin(), q.end());
    }
};
