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
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL || head->next==NULL || head->next->next==NULL)
            return head;
        ListNode* odd=head;
        ListNode* even=head->next;
        ListNode* even_h=head->next;
        while(odd->next!=NULL && odd->next->next!=NULL)
        {
            odd->next=odd->next->next;
            if(even->next==NULL || even->next->next==NULL)
            {
                even->next=NULL;
                odd=odd->next;
                break;
            }
            even->next=even->next->next;
            
            odd=odd->next;
            even=even->next;
        }
        odd->next=even_h;
        
        return head;
    }
};