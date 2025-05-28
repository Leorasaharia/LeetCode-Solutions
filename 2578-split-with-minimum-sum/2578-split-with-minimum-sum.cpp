class Solution {
public:
    int splitNum(int num) {
        vector<int> temp;
        while(num!=0){
            temp.push_back(num%10);
            num/=10;
        }
        sort(temp.begin(),temp.end());
        int a=0;
        int b=0;
        for(int i=0;i<temp.size();i++){
            if(i%2==0){
                a=a*10 + temp[i];
            }
            else{
                b=b*10 + temp[i];
            }
        }
        return a+b;
    }
};
