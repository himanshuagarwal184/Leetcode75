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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
    {
        ListNode *dummy = new ListNode(-1);
        int carry=0;
        ListNode *t1=l1,*t2=l2,*curr=dummy;
        while(l1!=NULL || l2!=NULL)
        {
            int x=carry;
            if(l1){
            x+= l1->val;
            }
            if(l2){
                x+=l2->val;
            }
            carry = x/10;
            x= x%10;
            ListNode *q = new ListNode(x);
            curr->next=q;
            curr=curr->next;
            if(l1!=NULL){
            l1=l1->next;}
            if(l2!=NULL){
            l2=l2->next;}
        }    
        if(carry!=0){
            ListNode *q = new ListNode(carry);
            curr->next=q;
            curr=curr->next;
        }
        return dummy->next;
    }
};