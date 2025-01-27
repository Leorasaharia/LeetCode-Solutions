class MinStack {
    stack<int>s,ms;
public:
    MinStack(){}
    void push(int x){
        s.push(x);
        if(ms.empty()||x<=ms.top()){
            ms.push(x);
        }
    }
    void pop(){
        if(s.top()==ms.top()){
            ms.pop();
        }
        s.pop();
    }
    int top(){
        return s.top();
    }
    int getMin(){
        return ms.top();
    }
};