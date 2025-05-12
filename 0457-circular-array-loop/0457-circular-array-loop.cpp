class Solution {
public:
    bool circularArrayLoop(vector<int>& a) {
        int n = a.size();
        
        for (int i = 0; i < n; ++i) {
            if (a[i] == 0) continue;

            int j = i, d = a[i] > 0 ? 1 : -1;
            unordered_set<int> visited;

            while (true) {
                if (visited.count(j)) return true;
                if (a[j] * d <= 0) break;

                visited.insert(j);
                int k = (j + a[j]) % n;
                if (k < 0) k += n;

                if (k == j) break;

                j = k;
            }

            for (int v : visited) {
                a[v] = 0;
            }
        }

        return false;
    }
};
