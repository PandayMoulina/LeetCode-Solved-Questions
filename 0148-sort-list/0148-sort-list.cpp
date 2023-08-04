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
    ListNode* sortList(ListNode* head) {
        //base case to end recursion
       if(head==NULL || head->next==NULL)
           return head;
        //to find mid
        ListNode* mid=findMid(head);
        
        //to break the linked list into two halves after finding mid
        ListNode* left=head;
        ListNode* right=mid->next;
        mid->next=NULL;
        
        
        //to sort each halves
        left=sortList(left);
        right=sortList(right);
        
        //merge both left and right halves
        ListNode* result=merge(left,right);
        
        return result;
    }
    
    ListNode* findMid(ListNode* head)
    {
        ListNode* slow=head;
        ListNode* fast=head->next;
        while(fast!=NULL && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
    
    ListNode* merge(ListNode* left, ListNode* right)
    {
        if(left==NULL)
            return right;
        if(right==NULL)
            return left;
        
        //for the head
        ListNode* ans=new ListNode(-1);
        ListNode* temp;
        
        temp=ans;
        
        while(left!=NULL && right!=NULL)
        {
            if(left->val<right->val)
            {
                temp->next=left;
                temp=temp->next;
                left=left->next;
            }
            else
            {
                temp->next=right;
                temp=temp->next;
                right=right->next;
            }
        }
        
        while(left!=NULL)
        {
            temp->next=left;
            left=left->next;
            temp=temp->next;
        }
        while(right!=NULL)
        {
            temp->next=right;
            right=right->next;
            temp=temp->next;
        }
        return ans->next;
        
    }
};