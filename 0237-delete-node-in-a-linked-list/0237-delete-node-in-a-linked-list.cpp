/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) //we are given the adress of the node that needs to be deleted ;not the value
    {
        node->val=node->next->val;  //copying the value of the next node
        node->next=node->next->next; //deleting the given node 
    }
};