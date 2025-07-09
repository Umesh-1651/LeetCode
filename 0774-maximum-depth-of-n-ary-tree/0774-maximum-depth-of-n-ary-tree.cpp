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
    int helper(Node* root,int height){
       
        if(root == NULL) return height;
         cout<<"Parent: "<<root->val<<endl;
        int maxheight = height;
        for(auto i:root->children){
            maxheight = max(maxheight,helper(i,height+1));
        }
        cout<<"Heighr: "<<height<<endl; 
        return maxheight;
    }
    int maxDepth(Node* root) {
        if(root == NULL) return 0;
        int ans = helper(root,1);
        return ans;
    }
};