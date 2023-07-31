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
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL)
            return NULL;
        
        int cycle=0;
        ListNode* fast=head;
        ListNode* slow=head;
        
        while(fast!=NULL && fast->next!=NULL)
        {
            fast=fast->next->next;
            slow=slow->next;
            
            if(fast==slow)
            {
                cycle=1;
                break;
            }  
        }
        if(cycle==1)
        {
            slow=head;
          while(slow!=fast)
          {
              fast=fast->next;
              slow=slow->next;
          }
            return slow;
        }
        else
            return NULL;
    }
};