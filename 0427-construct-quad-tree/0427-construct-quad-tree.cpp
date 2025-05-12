/*
// Definition for a QuadTree node.
class Node {
public:
    bool val;
    bool isLeaf;
    Node* topLeft;
    Node* topRight;
    Node* bottomLeft;
    Node* bottomRight;
    
    Node() {
        val = false;
        isLeaf = false;
        topLeft = NULL;
        topRight = NULL;
        bottomLeft = NULL;
        bottomRight = NULL;
    }
    
    Node(bool _val, bool _isLeaf) {
        val = _val;
        isLeaf = _isLeaf;
        topLeft = NULL;
        topRight = NULL;
        bottomLeft = NULL;
        bottomRight = NULL;
    }
    
    Node(bool _val, bool _isLeaf, Node* _topLeft, Node* _topRight, Node* _bottomLeft, Node* _bottomRight) {
        val = _val;
        isLeaf = _isLeaf;
        topLeft = _topLeft;
        topRight = _topRight;
        bottomLeft = _bottomLeft;
        bottomRight = _bottomRight;
    }
};
*/

class Solution {
public:
    Node* construct(vector<vector<int>>& grid) {
        return constructtree(grid, 0, 0, grid.size());
    }

    Node* constructtree(vector<vector<int>>& grid, int x, int y, int n) {
        bool is_same=true;
        int val=grid[x][y];
        for(int i=x;i<x+n;++i){
            for(int j=y;j<y+n;++j){
                if(grid[i][j]!=val){
                    is_same=false;
                    break;
                }
            }
            if(is_same==NULL){
                break;
            }
        }
        if(is_same){
            return new Node(val==1,true);
        }
        Node* topLeft = constructtree(grid, x, y, n/2);
        Node* topRight = constructtree(grid, x, y+n/2, n/2);
        Node* bottomLeft = constructtree(grid, x+n/2, y, n/2);
        Node* bottomRight = constructtree(grid, x+n/2, y+n/2, n/2);

        return new Node(false, false, topLeft, topRight, bottomLeft, bottomRight);
    }
};
