class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int> m(26, 0);
        for(char t : tasks){
            m[t - 'A']++;
        }

        priority_queue<int> pq;
        for(int i = 0; i < 26; i++) {
            if(m[i]) pq.push(m[i]);
        }

        int time = 0;
        while(!pq.empty()) {
            int cycle = n + 1;
            vector<int> tmp;

            while(cycle-- && !pq.empty()) {
                int cur = pq.top(); 
                pq.pop();
                if(--cur){
                    tmp.push_back(cur);
                }
                time++;
            }

            for(int i = 0; i < tmp.size(); i++){
                pq.push(tmp[i]);
            }

            if(pq.empty()){
                break;
            }
            time += cycle + 1; 
        }
        return time;
    }
};
