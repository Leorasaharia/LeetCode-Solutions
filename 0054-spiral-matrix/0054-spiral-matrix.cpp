class Solution{
public:
    vector<int> spiralOrder(vector<vector<int>>&m){
        int top=0;
        int left=0;
        int btm=m.size()-1;
        int ri=m[0].size()-1;
        vector<int>r((btm+1)*(ri+1));
        int idx=0;
        while(top<=btm &&left <=ri){
            for(int i=left;i<=ri;i++){
                r[idx++]=m[top][i];
                }
            top++;
            for(int i=top;i<=btm;i++){
                r[idx++]=m[i][ri];
            }
            ri--;
            if(top<=btm){
                for(int i=ri;i>=left;i--){
                    r[idx++]=m[btm][i];
                }
                btm--;
            }
            if(left<=ri){
                for(int i=btm;i>=top;i--){
                    r[idx++]=m[i][left];
                    }
                left++;
            }
        }
        return r;
    }
};