class Solution {
public:
    vector<int> sortArray(vector<int>&nums) {
        mergeSort(nums,0,nums.size()-1);
        return nums;
    }
    void mergeSort(vector<int>&a,int l,int r){
        if(l>=r) return;
        int m=(l+r)/2;
        mergeSort(a,l,m);
        mergeSort(a,m+1,r);
        merge(a,l,m,r);
    }
    void merge(vector<int>&a,int l,int m,int r){
        int n1=m-l+1;
        int n2=r-m;
        vector<int>x(n1),y(n2);
        for(int i=0;i<n1;i++){
            x[i]=a[l+i];
        }
        for(int i=0;i<n2;i++){
            y[i]=a[m+1+i];
        }
        int i=0,j=0,k=l;
        while(i<n1&&j<n2){
            if(x[i]<=y[j]){
                a[k++]=x[i++];
            }
            else{
                a[k++]=y[j++];
            }
        }
        while(i<n1){
            a[k++]=x[i++];
        }
        while(j<n2){
            a[k++]=y[j++];
        }
    }
};



// sort(nums.begin(),nums.end());
// return nums; (direct method)