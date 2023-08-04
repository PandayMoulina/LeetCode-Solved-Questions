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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int n1=0,n2=0;
        ListNode* ans;
        ListNode* temp=l1;
        while(temp!=NULL)
        {
            n1++;
            temp=temp->next;
        }
        temp=l2;
        while(temp!=NULL)
        {
            n2++;
            temp=temp->next;
        }
        if(n1>n2)
            ans=l1;
        else
            ans=l2;
        temp=ans;
        int sum,carry=0;
        while(l1!=NULL && l2!=NULL)
        {
            sum=l1->val+l2->val+carry;
            if(sum<10)
            {
                temp->val=sum;
                carry=0;
            }
            else
            {
                temp->val=sum%10;
                carry=sum/10;
            }
            temp=temp->next;
            l1=l1->next;
            l2=l2->next;
        }
        while(l1!=NULL)
        {
           sum=l1->val+carry;
            if(sum<10)
            {
                temp->val=sum;
                carry=0;
            }
            else
            {
                temp->val=sum%10;
                carry=sum/10;
            }
            temp=temp->next;
            l1=l1->next;
        }
        while(l2!=NULL)
        {
           sum=l2->val+carry;
            if(sum<10)
            {
                                temp->val=sum;
                carry=0;

            }            else
            {
                temp->val=sum%10;
                carry=sum/10;
            }
            temp=temp->next;
            l2=l2->next;
        }
        if(carry!=0)
        {
            temp=ans;
            while(temp->next!=NULL)
                temp=temp->next;
            temp->next=new ListNode();
            temp=temp->next;
            temp->val=carry;
            temp->next=NULL;
        }
        return ans;
    }
};