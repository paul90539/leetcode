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
    void levelOrderRecursive(vector<vector<int>>& flatten, Node *node, int level){
        if(node == nullptr) return;
        if(flatten.size() == level) flatten.push_back({});
                
        flatten[level].push_back(node->val);
        for(auto& ch : node->children){
            levelOrderRecursive(flatten, ch, level + 1);
        }        
    }
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> flatten;
        levelOrderRecursive(flatten, root, 0); //O(n)
        
        return flatten;
    }
};
