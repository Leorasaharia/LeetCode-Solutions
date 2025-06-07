class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int n=bills.size();
        int f=0, t=0;   
        for(int i=0;i<n;i++){
            if(bills[i]==5){
                f++; 
            } 
            else if(bills[i]==10){
                if(f!=0){
                    f--; 
                    t++;   
                }
                else{
                    return false;
                }
            }
            else{
                if(f&&t){
                    f--; 
                    t--;   
                }
                else if(f>=3){
                    f-=3;  
                }
                else{
                    return false; 
                } 
            }
        }
        return true;
    }
};