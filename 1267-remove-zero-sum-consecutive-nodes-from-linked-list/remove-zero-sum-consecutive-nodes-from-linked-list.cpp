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
    ListNode* removeZeroSumSublists(ListNode* head) 
    {
        ListNode* dummy = new ListNode(0);
        dummy->next=head;
        unordered_map<int,ListNode*>mp;
        mp[0]=dummy;
        int prefix_sum=0;
        while(head!=NULL)
        {
            prefix_sum = prefix_sum+head->val;
            if(mp.find(prefix_sum) != mp.end())
            {
                ListNode *st = mp[prefix_sum];
                int pf=prefix_sum;
                ListNode *temp=st;
                while(temp->next!=head)
                {
                    temp=temp->next;
                    pf+=temp->val;
                    mp.erase(pf);
                }
                st->next=head->next;
            }
            else
            {
                mp[prefix_sum]=head;
            }
            head=head->next;
        }
        return dummy->next;
    }
};