#include<unordered_map>
#include<vector>
#include<cstdlib>
using namespace std;
class RandomizedSet{
    unordered_map<int,int>m;
    vector<int>v;
public:
    RandomizedSet(){}
    bool insert(int x){
        if(m.count(x))return false;
        m[x]=v.size();
        v.push_back(x);
        return true;
    }
    bool remove(int x){
        if(!m.count(x))return false;
        int i=m[x],y=v.back();
        v[i]=y;
        m[y]=i;
        v.pop_back();
        m.erase(x);
        return true;
    }
    int getRandom(){
        return v[rand()%v.size()];
    }
};
