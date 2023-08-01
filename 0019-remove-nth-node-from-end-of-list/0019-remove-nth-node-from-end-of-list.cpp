/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* new_node= head;
        int k=0;
        while(new_node!=NULL)
        {
            k++;
            new_node=new_node->next;
        }
        if(k==1 && n==1)
            return NULL;
        if(k==n)
        return head->next;
        new_node=head;
        for(int i=1;i<(k-n);i++)
        {
            new_node=new_node->next;
        }
        new_node->next=new_node->next->next;
        return head;
    }
};