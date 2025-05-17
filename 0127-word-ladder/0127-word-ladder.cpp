class Solution{
public:
    int ladderLength(string beginWord,string endWord,vector<string>&wordList){
        unordered_set<string>dict(wordList.begin(),wordList.end());
        if(!dict.count(endWord)){
            return 0;
        }
        vector<string>curr;
        curr.push_back(beginWord); 

        unordered_set<string>visited;
        visited.insert(beginWord); 

        int steps=1;
        while(!curr.empty()){
            vector<string>next;
            int cc=curr.size();
            for(int i=0;i<cc;i++){
                string w=curr[i];
                if(w==endWord){
                    return steps;
                }
                int m=w.size();
                for(int j=0;j<m;j++){
                    string temp=w;
                    for(char c='a';c<='z';c++){
                        temp[j]=c;
                        if(dict.count(temp)&&!visited.count(temp)){
                            next.push_back(temp);
                            visited.insert(temp);
                        }
                    }
                }
            }
            curr=next;
            steps++;
        }
        return 0;
    }
};
