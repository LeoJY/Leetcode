//116. Populating Next Right Pointers in Each Node
//Given a binary tree
/*
struct TreeLinkNode {
    TreeLinkNode *left;
    TreeLinkNode *right;
    TreeLinkNode *next;
}
*/
//Populate each next pointer to point to its next right node. If there is no next right node, the next pointer should be set to NULL.
//Initially, all next pointers are set to NULL.
//Note:
//You may only use constant extra space.
//You may assume that it is a perfect binary tree (ie, all leaves are at the same level, and every parent has two children).

/**
 * Definition for binary tree with next pointer.
 * struct TreeLinkNode {
 *  int val;
 *  TreeLinkNode *left, *right, *next;
 *  TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
 * };
 */

class Solution {
public:
    void connect(TreeLinkNode *root) {
        if (root == NULL) return;
        TreeLinkNode* cur = NULL;
        TreeLinkNode* pre = root;
        while(pre -> left){
        	cur = pre;
        	while (cur){
        		cur -> left -> next = cur -> right;
        		if (cur -> next) cur -> right -> next = cur -> next -> left;
        		cur = cur -> next;
        	}
        	pre = pre -> left;
        }
    }
};
