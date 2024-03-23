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
    void reorderList(ListNode* head) 
    {
        if(head==NULL || head->next==NULL)
        {
            return;
        }
        vector<ListNode*> list;
        ListNode *t=head;
        int n=0;
        while(t!=NULL)
        {
            n++;
            list.push_back(t);
            t=t->next;
        }   
        for(int i=0;i<n;i++)
        {
            list[i]->next=list[n-1];
            list[n-1]->next=list[i+1];
            n--;
        }
       list[n]->next=NULL;
        
    }
};