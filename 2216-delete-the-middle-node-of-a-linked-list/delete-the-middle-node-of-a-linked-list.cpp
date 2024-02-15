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
    ListNode* deleteMiddle(ListNode* head) 
    {
        int n=0;
        ListNode *temp=head;
        while(temp!=NULL)
        {
            n++;
            temp=temp->next;
        }    
        if(n==1)
        {
            return NULL;
        }
        cout<<n;
        n=n/2-1;
        temp=head;
        for(int i=0;i<n;i++)
        {
            temp=temp->next;
        }
        ListNode *t=temp->next;
        temp->next=t->next;
        return head;
    }
};