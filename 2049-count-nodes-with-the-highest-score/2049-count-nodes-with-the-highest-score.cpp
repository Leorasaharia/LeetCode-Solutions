// subtree dp with bottom up approach 
class Solution {
public:
    int countHighestScoreNodes(vector<int>& parents) {
        int n=parents.size();
        vector<vector<int>>child(n); //adj list
        for(int i=1;i<n;i++){
            child[parents[i]].push_back(i);
        }
        // dfs to calc the size of the subtrees
        vector<int>subsize(n);
        calc(0,child,subsize);
        long long mx=0;
        int cnt=0;
        for(int i=0;i<n;i++){
            long long score=calcscore(i,parents,subsize,n,child);
            if(score>mx){
                mx=score;
                cnt=1;
            }else if(score==mx){
                cnt++;
            }
        }
        return cnt;
    }
    int calc(int node, vector<vector<int>>& child, vector<int>& subsize){
        int s=1; //cnt curr node
        for(int c: child[node]) {
            s+=calc(c,child,subsize);
        }
        subsize[node]=s;
        return s;
    }
    //calc score, rem node
    long long calcscore(int node, vector<int>& parents, vector<int>& subsize, int n, vector<vector<int>>& child) {
        long long score=1;
        //iff root doesnt exist (invalid) then add the size of the remaining tree  
        if(parents[node]!=-1){
            int rem=n-subsize[node];
            score*=rem;
        }
        //add remaining of child subtrees
        for(int c: child[node]){
            score*=subsize[c];
        }
        return score;
    }
};