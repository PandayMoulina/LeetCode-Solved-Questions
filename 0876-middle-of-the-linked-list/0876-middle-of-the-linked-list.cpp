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
    ListNode* copy;
public:
    ListNode* middleNode(ListNode* head) {
        int n=0;
         copy= head;
        while(copy!=nullptr)  //to find length of the linkedlist
        {
            n++;
            copy=copy->next;
        }
        int mid;
        if(n%2==0)
            mid=n/2+1;
        else
            mid=(n+1)/2;
        n=0;
        copy=head;
        while(n<mid-1)
        {
            n++;
            copy=copy->next;
        }
        return copy;
    }
};