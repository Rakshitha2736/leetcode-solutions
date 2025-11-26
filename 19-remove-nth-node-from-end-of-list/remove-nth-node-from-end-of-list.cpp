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
        ListNode *fast=head;
        ListNode *slow=head;
        ListNode *prev=NULL;
        while(n>1)
        {
            n--;
            slow=slow->next;
        }
        while(slow && slow->next)
        {
            prev=fast;
            fast=fast->next;
            slow=slow->next;
        }
        if(prev) prev->next=fast->next;
        else head=fast->next;
        return head;

    }
};