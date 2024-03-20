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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) 
    {
        ListNode *h1=list1,*h2=list2;
        while(h2->next!=NULL)
        {
            h2=h2->next;
        }   
        int i=0;
        ListNode*t;
        while(i<=b)
        {
            if(i==a-1)
            {
                t=h1;
            }
            h1=h1->next;
            i++;
        }
        t->next=list2;
        h2->next=h1;

        return list1;
    }
};