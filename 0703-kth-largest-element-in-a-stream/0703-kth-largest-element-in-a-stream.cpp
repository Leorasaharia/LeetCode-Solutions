class KthLargest {
public:
    int m;             
    vector<int>arr;    
    KthLargest(int k, vector<int>& nums){
        k=m;
        arr=nums;
        int n=arr.size();
        for(int i=0;i<n;i++){
            for(int j=0;j+1<n-i;++j){
                if(arr[j]>arr[j+1]){
                    int temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
            }
        }
    }
    int add(int val) {
        arr.push_back(val);
        int i=arr.size()-1;
        while(i>0){
            if(arr[i]<arr[i-1]){
                int temp=arr[i];
                arr[i]=arr[i-1];
                arr[i-1]=temp;
                i=i-1;
            }else{
                break;
            }
        }
        return arr[arr.size() - m];
    }
};
