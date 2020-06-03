/**
 * Definition for a Node.
 * struct Node {
 *     int val;
 *     int numChildren;
 *     struct Node** children;
 * };
 */

int maxDepth(struct Node* root) {
    if(!root) return 0;

    int result = 0;
        
    for(int i = 0; i < root->numChildren; i++)
        result = fmax(result, maxDepth((root->children[i])));
    
    return result + 1;
}
