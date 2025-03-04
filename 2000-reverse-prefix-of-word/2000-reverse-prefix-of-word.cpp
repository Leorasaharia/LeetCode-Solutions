class Solution {
public:
    string reversePrefix(string word, char ch) {
        int i=word.find(ch);
        if(i==-1){
            return word;
        }
        for(int l=0,r=i;l<r;l++,r--){
            swap(word[l], word[r]);
        }   
        return word;
    }
};
