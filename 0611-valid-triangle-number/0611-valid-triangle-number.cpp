class Solution {
public:
    int triangleNumber(vector<int>& n){
        int c=0;
        sort(n.begin(), n.end());
        for(int i=n.size()-1;i>=2;i--){
            int beg=0,end=i-1;
            while(beg<end){
                if(n[beg]+n[end]>n[i]){
                    c+=(end-beg);
                    end--;
                }
                else{
                    beg++;
                }
            }
        }
        return c;
    }
};