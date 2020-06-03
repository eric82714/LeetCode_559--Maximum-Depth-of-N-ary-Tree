/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    int maxDepth(Node* root) {
        if(!root) return 0;

        int result = 0;
        
        for(vector<Node*>::iterator it = root->children.begin(); it != root->children.end(); it++)
            result = max(result, maxDepth(*it));
  
        return result + 1;
    }
};
