class Solution {
public:
    Node*cloneGraph(Node*node) {
        if(!node) return NULL;
        unordered_map<Node*,Node*>copy;
        return dfs(node,copy);
    }
    Node*dfs(Node*curr,unordered_map<Node*,Node*>&copy){
        if(copy.count(curr)){
            return copy[curr];
        }
        Node*clone=new Node(curr->val);
        copy[curr]=clone;
        //return dfs(node);
        if(!curr->neighbors.empty()){
            for(Node*nei:curr->neighbors){
                clone->neighbors.push_back(dfs(nei,copy));
            }
        }else{
            clone->neighbors={};
        }
        return clone;
    }
};
