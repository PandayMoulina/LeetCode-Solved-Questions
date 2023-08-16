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
    ListNode* partition(ListNode* head, int x) {
        if(head==nullptr || head->next==nullptr)
            return head;
        ListNode* lesshead;
        ListNode* greaterhead;
        ListNode* n=head;
        int i=0,j=0;
        //for setting the heads right;
        while(n!=nullptr)
        {
            if(i==0 && n->val<x)
            {
                lesshead=n;
                i++;
            }
            if(j==0 && n->val>=x)
            {
                greaterhead=n;
                j++;
            }
            if(i==1 && j==1)
                break;
            n=n->next;
        }
        if(i==0 || j==0)
            return head;
        ListNode* less;
        ListNode* greater;
        less=lesshead;
        greater=greaterhead;
        n=head;
        while(n!=nullptr)
        {
            if(n!=lesshead && n->val<x)
            {
                less->next=n;
                less=less->next;
            }
            if(n!=greaterhead && n->val>=x)
            {
                greater->next=n;
                greater=greater->next;
            }
            n=n->next;
        }

        less->next=greaterhead;
        greater->next=nullptr;
        if(i!=0)
        return lesshead;
        else
            return greaterhead;
    }
};