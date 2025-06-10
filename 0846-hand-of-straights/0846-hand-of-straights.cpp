class Solution {
public:
    bool isNStraightHand(vector<int>& h, int g) {
        int n=h.size();
        //bubble sorting the cards
        for(int i=0;i<n-1;i++){
            for(int j=0;j<n-i-1;j++){
                if(h[j]>h[j+1]){
                    int temp=h[j];
                    h[j]=h[j+1];
                    h[j+1]=temp;
                }
            }
        }
        // visited array to mark used cards
        int vis[10000]={0}; 
        for(int i=0;i<n;i++){
            if(vis[i]!=0){
                continue;
            }
            int cnt=1;
            int prev=h[i];
            vis[i]=1;
            while(cnt<g){
                int curr=0;
                for(int j=0;j<n;j++){
                    if(vis[j]==0 && h[j]==prev+1){
                        vis[j]=1;
                        prev=h[j];
                        cnt++;
                        curr=1;
                        break;
                    }
                }
                if(curr==0){
                    return false;
                }
            }
        }
        return true;
    }
};
