/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    unordered_map<Node*, Node*> mp;
    //dfsfunction jo ek node clone karega aur uske neighbors ko bhi clone karega
    Node* dfs(Node* node){
        if(node==NULL){
            return NULL;
        }
        if(mp.find(node)!=mp.end()){
            return mp[node];
        }
        Node* clone=new Node(node->val);
        mp[node]=clone;
        for(int i=0; i< node->neighbors.size();i++){
            clone->neighbors.push_back(dfs(node->neighbors[i]));
        }
        return clone;
    }
    Node* cloneGraph(Node* node){
        return dfs(node);
    }
};
