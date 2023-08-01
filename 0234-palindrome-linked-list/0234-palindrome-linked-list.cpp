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
    bool isPalindrome(ListNode* head) {
        if(head->next==NULL)
            return true;
        ListNode* new_node=head;
        int n=0;
        while(new_node!=NULL)
        {
            n++;
            new_node=new_node->next;
        }
        int l;
        if(n%2==0)
            l=n/2;
        else
            l=(n+1)/2;
        vector<int> arr;
        new_node=head;
        for(int i=0;i<l;i++)
        {
            arr.push_back(new_node->val);
            new_node=new_node->next;
        }
        int arr_s=arr.size();
        if(n%2!=0)
            arr_s--;
        for(int i=arr_s-1;i>=0;i--)
        {
            if(new_node->val!=arr[i])
                return false;
            new_node=new_node->next;
        }
        return true;
    }
};