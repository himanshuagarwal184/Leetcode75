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
    ListNode* swapPairs(ListNode* head) {
        ListNode *dummy= new ListNode(0,head);
        ListNode *prev=dummy,*curr=head;
        while(curr && curr->next)
        {
            ListNode *nxt = curr->next->next,*scnd = curr->next;
            scnd->next = curr;
            curr->next=nxt;
            prev->next = scnd;

            prev=curr;
            curr= nxt;
        }
        return dummy->next;
    }
};