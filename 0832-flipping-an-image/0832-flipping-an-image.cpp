class Solution { 
public: 
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& img) { 
        int n=img.size();
        for(int i=0;i<n;i++) 
            for(int j=0;j<=(n-1)/2;j++) { 
                int t=!img[i][j]; 
                img[i][j]=!img[i][n-1-j]; 
                img[i][n-1-j]=t; 
            } 
        return img; 
    } 
};
