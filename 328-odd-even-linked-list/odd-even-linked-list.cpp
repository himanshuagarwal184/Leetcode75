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
    ListNode* oddEvenList(ListNode* head) 
    {
            if(head==NULL)
            {
                return head;
            }
        ListNode *temp=head,*t=head->next,*temp2=head,*t2=head->next;
        while(temp->next!=NULL && t->next!=NULL)
        {
            temp->next=t->next;
            temp=temp->next;
            t->next=temp->next;
            t=t->next;
        }    
        // while(temp2->next!=NULL)
        // {
        //     temp2=temp2->next;
        // }
        temp->next=t2;
        return head;
    }
};